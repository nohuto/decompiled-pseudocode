/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE_K@Z @ 0x1400B8734
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z @ 0x1400B84FC (-HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z.c)
 * Callees:
 *     ??$UserAllocateIsolatedType@UtagTIMER@@@@YAPEAUtagTIMER@@_K@Z @ 0x1400B98EC (--$UserAllocateIsolatedType@UtagTIMER@@@@YAPEAUtagTIMER@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagCURSOR@@@@YAPEAUtagCURSOR@@_K@Z @ 0x1400B9A7C (--$UserAllocateIsolatedType@UtagCURSOR@@@@YAPEAUtagCURSOR@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagWND@@@@YAPEAUtagWND@@_K@Z @ 0x1400B9CC4 (--$UserAllocateIsolatedType@UtagWND@@@@YAPEAUtagWND@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagIMC@@@@YAPEAUtagIMC@@_K@Z @ 0x1400B9D28 (--$UserAllocateIsolatedType@UtagIMC@@@@YAPEAUtagIMC@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagSMWP@@@@YAPEAUtagSMWP@@_K@Z @ 0x1400B9D90 (--$UserAllocateIsolatedType@UtagSMWP@@@@YAPEAUtagSMWP@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagHOOK@@@@YAPEAUtagHOOK@@_K@Z @ 0x14018FF1C (--$UserAllocateIsolatedType@UtagHOOK@@@@YAPEAUtagHOOK@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagMENU@@@@YAPEAUtagMENU@@_K@Z @ 0x140196E24 (--$UserAllocateIsolatedType@UtagMENU@@@@YAPEAUtagMENU@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagEVENTHOOK@@@@YAPEAUtagEVENTHOOK@@_K@Z @ 0x1401B468C (--$UserAllocateIsolatedType@UtagEVENTHOOK@@@@YAPEAUtagEVENTHOOK@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@U_CALLPROCDATA@@@@YAPEAU_CALLPROCDATA@@_K@Z @ 0x1401B6F88 (--$UserAllocateIsolatedType@U_CALLPROCDATA@@@@YAPEAU_CALLPROCDATA@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagBWND@@@@YAPEAUtagBWND@@_K@Z @ 0x1401DC5B8 (--$UserAllocateIsolatedType@UtagBWND@@@@YAPEAUtagBWND@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagDDECONV@@@@YAPEAUtagDDECONV@@_K@Z @ 0x1401DC61C (--$UserAllocateIsolatedType@UtagDDECONV@@@@YAPEAUtagDDECONV@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagHID_POINTER_DEVICE_INFO@@@@YAPEAUtagHID_POINTER_DEVICE_INFO@@_K@Z @ 0x1401DC67C (--$UserAllocateIsolatedType@UtagHID_POINTER_DEVICE_INFO@@@@YAPEAUtagHID_POINTER_DEVICE_INFO@@_K@.c)
 *     ??$UserAllocateIsolatedType@UtagKBDFILE@@@@YAPEAUtagKBDFILE@@_K@Z @ 0x1401DC6E0 (--$UserAllocateIsolatedType@UtagKBDFILE@@@@YAPEAUtagKBDFILE@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagKL@@@@YAPEAUtagKL@@_K@Z @ 0x1401DC744 (--$UserAllocateIsolatedType@UtagKL@@@@YAPEAUtagKL@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagMONITOR@@@@YAPEAUtagMONITOR@@_K@Z @ 0x1401DC7A8 (--$UserAllocateIsolatedType@UtagMONITOR@@@@YAPEAUtagMONITOR@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagSVR_INSTANCE_INFO@@@@YAPEAUtagSVR_INSTANCE_INFO@@_K@Z @ 0x1401DC80C (--$UserAllocateIsolatedType@UtagSVR_INSTANCE_INFO@@@@YAPEAUtagSVR_INSTANCE_INFO@@_K@Z.c)
 *     ??$UserAllocateIsolatedType@UtagXSTATE@@@@YAPEAUtagXSTATE@@_K@Z @ 0x1401DC86C (--$UserAllocateIsolatedType@UtagXSTATE@@@@YAPEAUtagXSTATE@@_K@Z.c)
 */

__int64 __fastcall HMAllocateIsolatedType(unsigned __int8 a1, ULONG_PTR a2)
{
  if ( a1 <= 0xBu )
  {
    switch ( a1 )
    {
      case 0xBu:
        return UserAllocateIsolatedType<tagXSTATE>(a2);
      case 1u:
        return UserAllocateIsolatedType<tagWND>(a2);
      case 2u:
        return UserAllocateIsolatedType<tagMENU>(a2);
      case 3u:
        return UserAllocateIsolatedType<tagCURSOR>(a2);
      case 4u:
        return UserAllocateIsolatedType<tagSMWP>(a2);
      case 5u:
        return UserAllocateIsolatedType<tagHOOK>(a2);
      case 7u:
        return UserAllocateIsolatedType<_CALLPROCDATA>(a2);
      case 9u:
        return UserAllocateIsolatedType<tagSVR_INSTANCE_INFO>(a2);
      case 0xAu:
        return UserAllocateIsolatedType<tagDDECONV>(a2);
    }
    goto LABEL_31;
  }
  switch ( a1 )
  {
    case 0xCu:
      return UserAllocateIsolatedType<tagMONITOR>(a2);
    case 0xDu:
      return UserAllocateIsolatedType<tagKL>(a2);
    case 0xEu:
      return UserAllocateIsolatedType<tagKBDFILE>(a2);
    case 0xFu:
      return UserAllocateIsolatedType<tagEVENTHOOK>(a2);
    case 0x10u:
      return UserAllocateIsolatedType<tagTIMER>(a2);
    case 0x11u:
      return UserAllocateIsolatedType<tagIMC>(a2);
  }
  if ( a1 != 22 )
  {
    if ( a1 == 23 )
      return UserAllocateIsolatedType<tagBWND>(a2);
LABEL_31:
    KeBugCheckEx(0x164u, 0x20uLL, a1, 0LL, 0LL);
  }
  return UserAllocateIsolatedType<tagHID_POINTER_DEVICE_INFO>(a2);
}
