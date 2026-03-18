/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x14000BE70
 * Callers:
 *     VidSchiRewindPacket @ 0x14000BD80 (VidSchiRewindPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x14000D880 (VidSchiSubmitWaitCommand.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1400271BC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  void (__fastcall *v25)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 192) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 192) &= ~4u;
    WdLogSingleEntry5(
      4LL,
      a1,
      *(_QWORD *)(a1 + 656),
      *(_QWORD *)(a1 + 664),
      0LL,
      _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0]);
    v7 = *(_QWORD *)(a1 + 664);
    WdLogGlobalForLineNumber = 15928;
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 656);
      if ( v8 )
      {
        v9 = v7;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 32);
          v9 = v10 - 32;
          if ( v10 - 32 == v8 )
            break;
          if ( v10 == a1 + 672 )
            goto LABEL_22;
        }
      }
      do
      {
        WdLogSingleEntry4(4LL, v7, *(int *)(v7 + 52), *(_QWORD *)(a1 + 656), *(unsigned int *)(a1 + 788));
        v11 = *(_DWORD *)(v7 + 80);
        WdLogGlobalForLineNumber = 15994;
        if ( (v11 & 0x10) != 0 )
        {
          *(_DWORD *)(v7 + 80) = v11 & 0xFFFFFFEF;
          if ( *(_DWORD *)(v2 + 16520) != -1 )
          {
            v25 = *(void (__fastcall **)(_QWORD))(v6 + 3336);
            if ( v25 )
              v25(*(_QWORD *)(v6 + 3368));
          }
        }
        ++*(_DWORD *)(a1 + 788);
        ++*(_DWORD *)(v2 + 3008);
        ++*(_DWORD *)(v6 + 784);
        if ( a2 )
        {
          v12 = *(_DWORD *)(v7 + 48);
          if ( v12 )
          {
            if ( v12 == 7 || v12 == 5 )
              *(_DWORD *)(v7 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v7 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 3000));
            RtlSetBitEx(v6 + 552, *(unsigned __int16 *)(v2 + 4));
          }
        }
        v13 = *(_QWORD *)(v7 + 32);
        v7 = v13 - 32;
      }
      while ( v13 - 32 != *(_QWORD *)(a1 + 656) && v13 != a1 + 672 );
      v14 = *(_QWORD *)(a1 + 664);
      *(_QWORD *)(a1 + 656) = v14;
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 48);
        if ( v15 == 5 || (v16 = 0, v15 == 4) )
          v16 = 1;
        v17 = v16 | *(_DWORD *)(a1 + 652) & 0xFFFFFFFE;
        v18 = 0;
        *(_DWORD *)(a1 + 652) = v17;
        if ( *(_DWORD *)(v14 + 48) == 3 )
          v18 = 2;
        v19 = v17 & 0xFFFFFFFD | v18;
        v20 = 0;
        *(_DWORD *)(a1 + 652) = v19;
        v21 = 0;
        if ( *(_DWORD *)(v14 + 48) == 7 )
          v20 = 4;
        v22 = v19 & 0xFFFFFFFB | v20;
        *(_DWORD *)(a1 + 652) = v22;
        if ( *(_DWORD *)(v14 + 48) == 6 )
          v21 = 8;
        *(_DWORD *)(a1 + 652) = v22 & 0xFFFFFFF7 | v21;
      }
      else
      {
        *(_DWORD *)(a1 + 652) &= 0xFFFFFFF0;
      }
    }
LABEL_22:
    v23 = *(_DWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 664) = 0LL;
    if ( (v23 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 192) >> 9) | *(_BYTE *)(a1 + 192)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, 10LL, 16091LL);
    }
    else if ( *(_DWORD *)(a1 + 788)
           && (*(_DWORD *)(a1 + 192) & 1) == 0
           && (*(_DWORD *)(a1 + 192) & 0x10) == 0
           && (*(_DWORD *)(a1 + 192) & 0x40) == 0
           && (*(_DWORD *)(a1 + 192) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, 16104LL);
    }
  }
  return v3;
}
