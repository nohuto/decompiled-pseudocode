/*
 * XREFs of ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x14028D324
 * Callers:
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x14021CE40 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x140249C40 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x14034CFE0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140239918 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDOBJ::bDeleteLargeBitmaps(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4)
{
  unsigned int v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v8; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v9[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  PVOID pvBits; // [rsp+50h] [rbp-20h]
  PVOID v13; // [rsp+58h] [rbp-18h]
  PVOID v14; // [rsp+60h] [rbp-10h]

  v4 = 0;
  v8 = 0;
  *(_WORD *)((char *)v9 + 1) = 0;
  HIBYTE(v9[0]) = 0;
  v10 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 1LL;
  v11 = *(_QWORD *)this;
  v9[1] = 119;
  LOBYTE(v9[0]) = 0;
  if ( a2 )
    pvBits = a2->pvBits;
  else
    pvBits = 0LL;
  if ( a3 )
    v13 = a3->pvBits;
  else
    v13 = 0LL;
  if ( a4 )
    v14 = a4->pvBits;
  else
    v14 = 0LL;
  LODWORD(Size) = 4;
  if ( (unsigned int)UMPDOBJ::Thunk(this, v9, 0x30u, &v8, Size) != -1 )
  {
    if ( v8 )
      v4 = 1;
  }
  UMPDOBJ::ResetHeap(this);
  return v4;
}
