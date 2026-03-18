/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402EEE68
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402EEB38 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x140266CA0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  __int64 v5; // rdx
  int PointerInfoByPointerId; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // eax
  const struct tagPOINTER_INFO *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v13);
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v5) = 19;
    v7 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 2), v5);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 456);
      v9 = *(_DWORD **)(v8 + 16);
      if ( v9[499] == 1
        && (((*(_DWORD *)(v8 + 224) - 1) & 0xFFFFFFFD) == 0
          ? (v10 = v9[503], v11 = v9[504])
          : (v10 = v9[504], v11 = v9[503]),
            *((_DWORD *)this + 31) == v10 && *((_DWORD *)this + 32) == v11) )
      {
        *a3 = (float)(v9[509] - v9[507]) / (float)v10;
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
