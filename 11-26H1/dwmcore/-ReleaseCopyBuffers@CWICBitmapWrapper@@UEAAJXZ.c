/*
 * XREFs of ?ReleaseCopyBuffers@CWICBitmapWrapper@@UEAAJXZ @ 0x1802250D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapWrapper::ReleaseCopyBuffers(CWICBitmapWrapper *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  if ( v1 )
  {
    v7 = 0LL;
    v2 = (**v1)(v1, &IID_IWICDecoderBitmapSource, &v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x9Bu, 0LL);
      ReleaseInterfaceNoNULL<ID2D1Ink>(v7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\WICBitmapWrapper.h",
        (const char *)(unsigned int)v2);
    }
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xA1u, 0LL);
  }
  return v3;
}
