/*
 * XREFs of ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400E6004
 * Callers:
 *     ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140003A5C (-reserve@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0.c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140003B58 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 *     ndisBlowStringListIntoAtoms @ 0x14014DEEC (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void **__fastcall wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(
        void **a1)
{
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a1, 0LL);
  return a1;
}
