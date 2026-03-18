/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402FE570
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402FE238 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x14028B868 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  const struct tagPOINTER_INFO *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 1.0;
  v13 = 0LL;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v13);
  if ( PointerInfoByPointerId >= 0 )
  {
    v6 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 2), 19);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 456);
      v8 = *(_DWORD **)(v7 + 16);
      if ( v8[497] == 1
        && ((v9 = *(_DWORD *)(v7 + 224), v9 == 1) || v9 == 3
          ? (v10 = v8[501], v11 = v8[502])
          : (v10 = v8[502], v11 = v8[501]),
            *((_DWORD *)this + 31) == v10 && *((_DWORD *)this + 32) == v11) )
      {
        *a3 = (float)(v8[507] - v8[505]) / (float)v10;
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)PointerInfoByPointerId;
}
