/*
 * XREFs of ??0CDummyUnknown@@QEAA@XZ @ 0x18055C4AC
 * Callers:
 *     BindCtx_CreateWithObjectParam @ 0x18055DAAC (BindCtx_CreateWithObjectParam.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x1806889E0 (BindCtx_CreateWithObjectParam_0.c)
 *     BindCtx_RegisterObjectParam @ 0x1806CB614 (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

CDummyUnknown *__fastcall CDummyUnknown::CDummyUnknown(CDummyUnknown *this)
{
  CDummyUnknown *result; // rax

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &CDummyUnknown::`vftable'{for `IOleWindow'};
  *((_QWORD *)this + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
  *((_QWORD *)this + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(GUID *)((char *)this + 40) = GUID_NULL;
  return result;
}
