/*
 * XREFs of DpiGetDriverStorePath @ 0x1403BCEA0
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14038C110 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403BCBF0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr_0 @ 0x14006E443 (wcsstr_0.c)
 */

__int64 __fastcall DpiGetDriverStorePath(__int64 a1, char *a2, int *a3)
{
  int v5; // ebx
  wchar_t *v6; // rax
  wchar_t *v7; // rcx
  wchar_t i; // ax
  wchar_t v9; // r8
  wchar_t *v10; // rax
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v5 = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL), &v13);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( (unsigned __int16)v13 >= (unsigned __int64)(unsigned int)*a3 - 2 )
  {
    v5 = -2147483643;
    v11 = (unsigned __int16)v13 + 2;
LABEL_16:
    *a3 = v11;
    goto LABEL_17;
  }
  RtlStringCbCopyW(a2, (unsigned __int16)v13, *((char **)&v13 + 1));
  *(_WORD *)&a2[2 * ((unsigned __int64)(unsigned __int16)v13 >> 1)] = 0;
  v6 = wcsstr_0((const wchar_t *)a2, L"FileRepository");
  v7 = v6;
  if ( v6 )
  {
    for ( i = *v6; i != 92 && i; i = *v7 )
      ++v7;
    v9 = *v7;
    if ( *v7 )
      v9 = v7[1];
    v10 = v7 + 1;
    if ( !*v7 )
      v10 = v7;
    if ( v9 != 92 )
    {
      do
      {
        if ( !*v10 )
          break;
        ++v10;
      }
      while ( *v10 != 92 );
    }
    *v10 = 0;
    v11 = (_DWORD)v10 - (_DWORD)a2;
    goto LABEL_16;
  }
  v5 = -1073741811;
LABEL_17:
  if ( *((_QWORD *)&v13 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v13 + 1), 0);
  return (unsigned int)v5;
}
