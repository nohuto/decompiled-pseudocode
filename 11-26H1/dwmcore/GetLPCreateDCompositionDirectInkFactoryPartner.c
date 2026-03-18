/*
 * XREFs of GetLPCreateDCompositionDirectInkFactoryPartner @ 0x18020BBF0
 * Callers:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18020BB60 (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  signed int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = dword_1803E25FC;
  if ( dword_1803E25FC < 0 )
  {
    v7 = 24;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v7, 0LL);
    goto LABEL_14;
  }
  ProcAddress = (FARPROC)qword_1803E2600;
  if ( qword_1803E2600 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( !LibraryW )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v7 = 29;
    if ( v1 >= 0 )
      v1 = -2003304445;
    goto LABEL_13;
  }
  ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
  qword_1803E2600 = (__int64)ProcAddress;
  if ( ProcAddress )
  {
LABEL_11:
    *a1 = ProcAddress;
  }
  else
  {
    v1 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467261, 0x23u, 0LL);
  }
LABEL_14:
  dword_1803E25FC = v1;
  return (unsigned int)v1;
}
