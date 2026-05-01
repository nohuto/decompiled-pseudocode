/*
 * XREFs of ??0CDummyUnknown@@QEAA@XZ @ 0x1805386B8
 * Callers:
 *     BindCtx_CreateWithObjectParam @ 0x180539C68 (BindCtx_CreateWithObjectParam.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x1806628C0 (BindCtx_CreateWithObjectParam_0.c)
 *     BindCtx_RegisterObjectParam @ 0x1806A353C (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

CDummyUnknown *__fastcall CDummyUnknown::CDummyUnknown(CDummyUnknown *this)
{
  CDummyUnknown *result; // rax

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDummyUnknown::`vftable'{for `IOleWindow'};
  *((_QWORD *)this + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
  *((_QWORD *)this + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
  result = this;
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 14) = 0;
  *(GUID *)((char *)this + 40) = GUID_NULL;
  return result;
}
