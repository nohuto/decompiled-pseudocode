/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180652C50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBackgroundExtensionContract@@YA_NPEBG@Z @ 0x1806523C8 (-IsBackgroundExtensionContract@@YA_NPEBG@Z.c)
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x1806524DC (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3,
        __int64 a4)
{
  const WCHAR *StringRawBuffer; // rsi
  HSTRING *v7; // r8
  int v8; // ebp
  unsigned int i; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2, 0LL, a4);
  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = SplitActionAndServiceId(a2, &string, v7);
  if ( v8 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  for ( i = 0; i < 0x2E; ++i )
  {
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_180735CF0)[2 * i], -1, 0) == 2 )
    {
      *(_DWORD *)a3 = *((_DWORD *)&off_180735CF0 + 4 * i + 2);
      goto LABEL_12;
    }
  }
  if ( !IsBackgroundExtensionContract(StringRawBuffer) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v11, v10, v12, v13);
LABEL_12:
  WindowsDeleteString(string);
  return (unsigned int)v8;
}
