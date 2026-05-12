/*
 * XREFs of NvmeAdapterSetLedStateByNpem @ 0x14008F4EC
 * Callers:
 *     NvmeAdapterSetLedState @ 0x1400DCBC8 (NvmeAdapterSetLedState.c)
 * Callees:
 *     NvmeGetNpemControlInterface @ 0x14008FCE8 (NvmeGetNpemControlInterface.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterSetLedStateByNpem(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // eax
  int i; // ebx
  ULONG v8; // ebx
  bool v9; // cc
  __int64 v10; // r8
  int v11; // eax
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v13 = 0LL;
  v12 = 0;
  result = NvmeGetNpemControlInterface(a1, &v13);
  if ( (int)result >= 0 )
  {
    v5 = v13;
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(v13 + 40))(*(_QWORD *)(v13 + 8), &v12);
    if ( (int)result >= 0 )
    {
      v6 = *(_DWORD *)(a2 + 8);
      for ( i = 0; ; ++i )
      {
        v6 >>= 1;
        if ( !v6 )
          break;
      }
      v8 = i + 2;
      v9 = v8 <= RtlNumberOfSetBitsUlongPtr(0x3FFuLL);
      v11 = v12;
      if ( v9 )
        v3 = v8;
      if ( (v12 & 1) != 0 && _bittest(&v11, v3) )
      {
        LOBYTE(v10) = *(_BYTE *)(a2 + 12);
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v5 + 48))(*(_QWORD *)(v5 + 8), v3, v10);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  return result;
}
