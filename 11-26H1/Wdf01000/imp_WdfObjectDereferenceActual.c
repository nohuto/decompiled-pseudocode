/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x14005DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  unsigned __int16 *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) == 0 )
  {
    v9 = *(_QWORD *)v5;
    v8 = ~Object & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_4;
  }
  v6 = *v5;
  v7 = (__int64 *)((char *)v5 - v6);
  v8 = (unsigned __int64)v7;
  v9 = *v7;
  if ( !(_WORD)v6 )
  {
LABEL_4:
    (*(void (__fastcall **)(unsigned __int64, void *, _QWORD, const char *))(v9 + 16))(v8, Tag, Line, File);
    return;
  }
  (*(void (__fastcall **)(__int64 *, __int64, void *))(v9 + 32))(v7, v6, Tag);
}
