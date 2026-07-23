/*
 * XREFs of MiInitializeZeroingDomains @ 0x140885648
 * Callers:
 *     MiUpdateEngineAffinities @ 0x1404F725C (MiUpdateEngineAffinities.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     MiGetNodeBaseDomain @ 0x1404F07C0 (MiGetNodeBaseDomain.c)
 *     MiGetEngineType @ 0x14050BFB4 (MiGetEngineType.c)
 *     MiGetProcessorDomain @ 0x14050E314 (MiGetProcessorDomain.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MiInitializeZeroingDomains(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  unsigned int i; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int16 v9; // r15
  int FirstSetRightGroupAffinity; // r10d
  __int64 v11; // r9
  bool v12; // zf
  int ProcessorDomain; // eax
  _DWORD *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r11
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(unsigned int *)(a1 + 16);
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    result = *(_QWORD *)(a1 + 32);
    v7 = 16LL * i;
    v23 = *(_OWORD *)(result + v7);
    v8 = v23;
    if ( (_QWORD)v23 )
    {
      v9 = WORD4(v23);
      do
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((unsigned __int64 *)&v23);
        v11 = KiProcessorBlock[FirstSetRightGroupAffinity];
        v8 &= ~*(_QWORD *)(v11 + 200);
        v12 = *(_BYTE *)(a1 + 1) == 0;
        *(_QWORD *)&v23 = v8;
        if ( !v12 )
          MiGetNodeBaseDomain(*(_DWORD *)(v11 + 34644));
        ProcessorDomain = MiGetProcessorDomain(FirstSetRightGroupAffinity);
        v18 = (unsigned int)(v17 + ProcessorDomain);
        v19 = 6 * v18;
        v20 = *(_QWORD *)(v16 + 48 * v18);
        if ( a2 )
        {
          result = MiGetEngineType(v15);
          if ( (_DWORD)result != a2 )
            continue;
        }
        *(_DWORD *)(a1 + 80) = *v14;
        result = *(_QWORD *)(v15 + 200);
        *(_QWORD *)(v7 + v20) |= result;
        *(_WORD *)(v7 + v20 + 8) = v9;
        *(_DWORD *)(v16 + 8 * v19 + 40) = 1;
      }
      while ( v8 );
    }
  }
  v21 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)v3 )
  {
    v22 = v3;
    do
    {
      result = (__int64)memmove(*(void **)(v21 + 8), *(const void **)v21, 16LL * *(unsigned int *)(a1 + 4));
      v21 += 48LL;
      --v22;
    }
    while ( v22 );
  }
  return result;
}
