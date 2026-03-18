/*
 * XREFs of ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14018C660
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x140057024 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     McTemplateK0xtq_EtwWriteTransfer @ 0x140093264 (McTemplateK0xtq_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 */

void __fastcall DpiIndirectCbDisableRenderD3RequestsWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int Miniport; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ah] [rbp-26h]
  PVOID Tag; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+48h] [rbp-18h]
  _QWORD v18[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _FDO_CONTEXT *v19; // [rsp+98h] [rbp+38h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1401693A0, Executive, 0, 0, 0LL);
    v4 = (char *)qword_1401693D8;
    if ( qword_1401693D8 == &qword_1401693D8 )
      break;
    if ( *((void ***)qword_1401693D8 + 1) != &qword_1401693D8
      || (v5 = *(_QWORD *)qword_1401693D8, *(void **)(*(_QWORD *)qword_1401693D8 + 8LL) != qword_1401693D8) )
    {
      __fastfail(3u);
    }
    qword_1401693D8 = *(void **)qword_1401693D8;
    *(_QWORD *)(v5 + 8) = &qword_1401693D8;
    KeReleaseMutex(&stru_1401693A0, 0);
    v6 = *(_QWORD *)(v4 + 20);
    Tag = 0LL;
    v18[0] = 0x100000001LL;
    v18[1] = v6;
    v17 = 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    v19 = 0LL;
    Miniport = DpiIndirectGetMiniport(
                 (const struct DXGK_MINIPORT_FILTER *)v18,
                 (struct AUTO_REMOVE_LOCK *)&Tag,
                 (struct AUTO_PNPPOWER_LOCK *)&v13,
                 &v19);
    v10 = Miniport;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000000LL) != 0 )
    {
      LODWORD(v12) = Miniport;
      LODWORD(Timeout) = *((_DWORD *)v4 + 4);
      McTemplateK0xtq_EtwWriteTransfer((unsigned int)Timeout, v8, v9, *(_QWORD *)(v4 + 20), Timeout, v12);
    }
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v4 + 4) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v19 + 3) + 64LL) + 4232LL));
      else
        DpiEnableD3Requests(*((_QWORD *)v19 + 3));
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v13);
    if ( v17 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
      v17 = 0;
    }
  }
  byte_140169398 = 0;
  KeReleaseMutex(&stru_1401693A0, 0);
  IoFreeWorkItem(IoWorkItem);
}
