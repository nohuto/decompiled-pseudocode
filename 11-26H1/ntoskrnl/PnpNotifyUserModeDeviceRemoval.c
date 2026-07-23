/*
 * XREFs of PnpNotifyUserModeDeviceRemoval @ 0x1409B4610
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 */

__int64 __fastcall PnpNotifyUserModeDeviceRemoval(
        __int64 a1,
        _WORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int128 v8; // xmm6
  __int64 v9; // r12
  __int64 v10; // r13
  _WORD *v11; // rcx
  __int64 v12; // rdx
  __int16 v13; // ax
  _WORD *v14; // rax
  signed int v15; // ebx
  __int128 v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rax
  _WORD Src[200]; // [rsp+20h] [rbp-1E8h] BYREF

  if ( a6 )
    *a6 = 0;
  v8 = *(_OWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = Src;
  v12 = 200LL;
  do
  {
    if ( v12 == -2147483446 )
      break;
    v13 = *(_WORD *)((char *)v11 + a1 - (_QWORD)Src + 168);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v12;
  }
  while ( v12 );
  v14 = v11 - 1;
  v15 = v12 == 0 ? 0x80000005 : 0;
  if ( v12 )
    v14 = v11;
  *v14 = 0;
  if ( v12 )
  {
    v17 = *a3;
    *(_QWORD *)(a1 + 48) = a4;
    v18 = -1LL;
    *(_OWORD *)(a1 + 120) = v17;
    *(_QWORD *)(a1 + 56) = a5;
    while ( *a2 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a2[v19] );
      memmove((void *)(a1 + 168), a2, 2 * v19 + 2);
      v15 = PiUEventNotifyUserMode(a1);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741536 )
          v15 = -2147483608;
        break;
      }
      if ( a6 )
        ++*a6;
      v20 = -1LL;
      do
        ++v20;
      while ( a2[v20] );
      a2 += v20 + 1;
    }
    *(_OWORD *)(a1 + 120) = v8;
    *(_QWORD *)(a1 + 48) = v9;
    *(_QWORD *)(a1 + 56) = v10;
    do
      ++v18;
    while ( Src[v18] );
    memmove((void *)(a1 + 168), Src, 2 * v18 + 2);
  }
  return (unsigned int)v15;
}
