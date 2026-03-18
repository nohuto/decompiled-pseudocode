/*
 * XREFs of ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14021783C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 * Callees:
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x14010D5C8 (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84 (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 */

char __fastcall CCursorClip::ApplySystemClips(
        CCursorClip *a1,
        struct tagPOINT a2,
        unsigned int a3,
        struct tagPOINT *a4,
        _DWORD *a5)
{
  char v5; // bp
  LONG x; // ebx
  LONG *p_y; // rdi
  char v11; // r12
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v5 = 0;
  *a4 = a2;
  x = a2.x;
  *a5 = 0;
  CCursorClip::ApplyShellClip(a1, *a4, a4);
  if ( !(unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_6;
  if ( a4->x != x )
    *a5 |= 1u;
  p_y = &a4->y;
  if ( a4->y != y )
  {
    *a5 |= 2u;
LABEL_6:
    p_y = &a4->y;
  }
  v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::BoundPointToRegions)(a1, *a4, a3, a4);
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() && v11 )
  {
    if ( a4->x != x )
      *a5 |= 1u;
    p_y = &a4->y;
    if ( a4->y != y )
      *a5 |= 2u;
  }
  if ( a4->x != x || *p_y != y )
    return 1;
  return v5;
}
