/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140A84144
 * Callers:
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 * Callees:
 *     MiTrimSharedPageFromView @ 0x14046BEB4 (MiTrimSharedPageFromView.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiDeleteTrimViewInfoList @ 0x140A841F8 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(PVOID *P, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // ebp
  PVOID *v9; // rdi
  unsigned int v11[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-160h]
  __int64 v13; // [rsp+30h] [rbp-158h]

  memset_0(v11, 0, 0x130uLL);
  v8 = 0;
  v12 = a4;
  v13 = a3;
  v11[1] = a2;
  while ( P )
  {
    v9 = P;
    P = (PVOID *)*P;
    MiTrimSharedPageFromView(v11, (__int64)v9);
    ExFreePoolWithTag(v9, 0);
    if ( (a2 & 0x100) != 0 && (*a4 & 1) == 0 )
    {
      MiDeleteTrimViewInfoList(P);
      return v8;
    }
  }
  return v11[0];
}
