/*
 * XREFs of ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x14014E40C
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 */

__int64 __fastcall ndisGetFilterAltitude(struct NetSetupPropertyBag *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  char *Atom; // r10
  unsigned int v6; // ecx
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  v4 = NetSetupPropertyBag::ReadString(a1, &NETSETUPPKEY_FilterDriver_Class, &v10);
  if ( v4 == -1073741772 )
  {
    *a2 = 0;
  }
  else if ( v4 )
  {
    v3 = v4;
  }
  else
  {
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_14011F6E0, *(_WORD **)(v10 + 8));
    if ( Atom )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = v6;
        if ( v6 >= (unsigned __int64)*((unsigned int *)qword_14011F6E0 + 19) )
          break;
        v8 = ++v6;
        if ( *(char **)(*((_QWORD *)qword_14011F6E0 + 10) + 8 * v7) == Atom )
        {
          *a2 = v8;
          goto LABEL_14;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xAu,
          (struct _GUID *)&WPP_e951ce375e4a3458b598cd910eaaab3e_Traceguids,
          (unsigned __int16 *)v10);
      v3 = -1073741637;
    }
    else
    {
      v3 = -1073741670;
    }
  }
LABEL_14:
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v10, 0LL);
  return v3;
}
