/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x140081918
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     FindAdjacentMonitor @ 0x140081B2C (FindAdjacentMonitor.c)
 *     LogicalToPhysicalDPIRect @ 0x140082A40 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        LONG *a1,
        int *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  LONG left; // eax
  LONG top; // ecx
  LONG v11; // eax
  LONG right; // eax
  LONG bottom; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  bool v22; // cc
  __int64 result; // rax
  int v24; // edx
  int v25; // ecx
  __int64 AdjacentMonitor; // [rsp+20h] [rbp-20h] BYREF
  __int128 v27; // [rsp+28h] [rbp-18h] BYREF

  left = *a1;
  if ( *a1 >= a3->left )
    left = a3->left;
  *a1 = left;
  top = a3->top;
  v11 = a1[1];
  v27 = 0LL;
  if ( v11 >= top )
    v11 = top;
  a1[1] = v11;
  right = a1[2];
  if ( right <= a3->right )
    right = a3->right;
  a1[2] = right;
  bottom = a1[3];
  if ( bottom <= a3->bottom )
    bottom = a3->bottom;
  a1[3] = bottom;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v14 = ((__int64 (__fastcall *)(__int128 *, struct tagRECT *, _QWORD, __int64 *))LogicalToPhysicalDPIRect)(
          &v27,
          a3,
          a5,
          &AdjacentMonitor);
  v15 = PhysicalToLogicalDPIRect(&v27, &v27, a4, &AdjacentMonitor);
  v16 = a2[2];
  v17 = v14 | v15;
  v18 = v27;
  if ( *a2 < (int)v27 )
    v18 = *a2;
  v19 = a2[1];
  *a2 = v18;
  v20 = DWORD1(v27);
  if ( v19 < SDWORD1(v27) )
    v20 = v19;
  v21 = DWORD2(v27);
  v22 = v16 <= SDWORD2(v27);
  a2[1] = v20;
  result = v17;
  if ( !v22 )
    v21 = v16;
  v24 = a2[3];
  a2[2] = v21;
  v25 = HIDWORD(v27);
  if ( v24 > SHIDWORD(v27) )
    v25 = v24;
  a2[3] = v25;
  return result;
}
