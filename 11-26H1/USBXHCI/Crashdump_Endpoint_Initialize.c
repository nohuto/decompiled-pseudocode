/*
 * XREFs of Crashdump_Endpoint_Initialize @ 0x1400538D4
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x140050EC8 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     Crashdump_CommonBufferAcquire @ 0x140050914 (Crashdump_CommonBufferAcquire.c)
 */

__int64 __fastcall Crashdump_Endpoint_Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // edx
  __int64 v14; // rcx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 168) = 1LL;
  *(_DWORD *)(a1 + 160) = 0;
  v8 = (unsigned int)(a4 - 1) + 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
    v9 = v8 << 6;
  else
    v9 = 32 * v8;
  *(_QWORD *)(a1 + 40) = a7 + v9;
  v10 = (unsigned int)(a4 - 1);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 104LL) & 4) != 0 )
    v11 = (v10 + 1) << 6;
  else
    v11 = 32 * (v10 + 1);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(v11 + a6);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(v11 + a6 + 16);
  if ( a4 == 1 )
    v12 = 80;
  else
    v12 = 16 * ((((unsigned __int64)a5 + 8190) >> 12) + 2);
  v13 = Crashdump_CommonBufferAcquire(a2, v12, a1 + 80);
  if ( v13 >= 0 )
  {
    v13 = Crashdump_CommonBufferAcquire(*(_QWORD *)a1, v12, a1 + 104);
    if ( v13 >= 0 && (*(_DWORD *)(a1 + 48) & 0x7C00) != 0 )
    {
      v14 = *(_QWORD *)a1;
      *(_BYTE *)(a1 + 128) = 1;
      v13 = Crashdump_CommonBufferAcquire(v14, 64, a1 + 136);
      if ( v13 >= 0 )
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL) = *(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF0uLL | 3;
    }
  }
  return (unsigned int)v13;
}
