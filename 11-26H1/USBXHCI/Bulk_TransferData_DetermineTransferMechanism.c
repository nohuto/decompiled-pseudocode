/*
 * XREFs of Bulk_TransferData_DetermineTransferMechanism @ 0x140004180
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1400045B4 (CommonBuffer_QueueWorkItem.c)
 */

void __fastcall Bulk_TransferData_DetermineTransferMechanism(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rdi
  __int64 v4; // r9
  int v5; // r8d
  unsigned int v6; // r10d
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  char *v14; // r14
  char v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(unsigned __int16 *)(v4 + 2);
    if ( v5 != 56 )
    {
      v6 = v5 - 8;
      switch ( *(_WORD *)(v4 + 2) )
      {
        case 8:
        case 9:
        case 0xA:
        case 0x32:
        case 0x37:
          break;
        case 0x39:
        case 0x3A:
          goto LABEL_17;
        default:
          goto LABEL_4;
      }
    }
    v6 = v5 - 8;
LABEL_4:
    if ( *(_BYTE *)(v3 + 328) && v1 <= 8 )
    {
      *(_DWORD *)(a1 + 76) = 1;
      return;
    }
    if ( v6 <= 0x32 && v5 != 56 )
    {
      switch ( v6 )
      {
        case '1':
        case '2':
          goto LABEL_8;
        default:
          break;
      }
    }
    v7 = *(_QWORD **)(v4 + 48);
    if ( !v7 || !*v7 )
    {
LABEL_8:
      if ( v1 <= *(_DWORD *)(v3 + 24) )
      {
        *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        v8 = (_QWORD *)(v3 + 224);
        v9 = *(_QWORD **)(v3 + 224);
        if ( v9 == (_QWORD *)(v3 + 224) )
        {
          v12 = *(_QWORD *)(v3 + 40);
          v13 = *(unsigned int *)(v3 + 24);
          v15 = 0;
          v14 = *(char **)(v12 + 120);
          v9 = (_QWORD *)XilCoreCommonBuffer_AcquireBuffer(v14 + 88, v13, v3, 845639250LL, &v15);
          if ( v15 == 1 )
            CommonBuffer_QueueWorkItem(v14);
        }
        else
        {
          if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          *(_QWORD *)(v10 + 8) = v8;
          v9[1] = v9;
          *v9 = v9;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
        *(_QWORD *)(a1 + 96) = v9;
        if ( v9 )
        {
          v11 = 2;
LABEL_15:
          *(_DWORD *)(a1 + 76) = v11;
          return;
        }
      }
    }
LABEL_17:
    v11 = 3;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 76) = 0;
}
