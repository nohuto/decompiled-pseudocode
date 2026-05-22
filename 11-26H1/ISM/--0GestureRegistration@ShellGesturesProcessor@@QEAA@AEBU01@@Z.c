/*
 * XREFs of ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x18002F7EC
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x18002F3CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x18002F918 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ShellGesturesProcessor::GestureRegistration *__fastcall ShellGesturesProcessor::GestureRegistration::GestureRegistration(
        ShellGesturesProcessor::GestureRegistration *this,
        const struct ShellGesturesProcessor::GestureRegistration *a2)
{
  __int64 (__fastcall ****v4)(_QWORD); // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 16);
  *v4 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v4);
  *((_BYTE *)this + 24) = *((_BYTE *)a2 + 24);
  return this;
}
