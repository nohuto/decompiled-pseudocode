/*
 * XREFs of ?ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@@Z @ 0x140097608
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x14004FB60 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstrai.c)
 */

void __fastcall ProtectableFromChange::ImposeModifyingActionConstraints(
        ProtectableFromChange *this,
        unsigned __int8 a2,
        const union ProtectableFromChange::ModifyingActionConstraints *a3)
{
  unsigned __int64 v3; // rdi
  char v6; // bl

  v3 = a2;
  if ( a2 >= *((_BYTE *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 277;
  }
  v6 = *(_BYTE *)a3;
  *(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 24, v3) = v6;
}
