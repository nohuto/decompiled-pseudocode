/*
 * XREFs of AlpcpCaptureIdMessage @ 0x140A94098
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtAlpcQueryInformationMessage @ 0x1407C3C50 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // di
  __int16 UShortFromUser; // ax
  int v8; // eax
  __int64 result; // rax
  unsigned int *v10; // rcx
  int ULongFromUser; // eax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(a1 + 4));
  else
    UShortFromUser = *(_WORD *)(a1 + 4);
  if ( (UShortFromUser & 0x1000) != 0 )
  {
    if ( PreviousMode )
      ULongFromUser = RtlReadULongFromUser((unsigned int *)(a1 + 16));
    else
      ULongFromUser = *(_DWORD *)(a1 + 16);
    *a2 = ULongFromUser;
    if ( !PreviousMode )
    {
      result = *(unsigned int *)(a1 + 20);
      goto LABEL_8;
    }
    v10 = (unsigned int *)(a1 + 20);
    goto LABEL_10;
  }
  if ( PreviousMode )
    v8 = RtlReadULongFromUser((unsigned int *)(a1 + 24));
  else
    v8 = *(_DWORD *)(a1 + 24);
  *a2 = v8;
  if ( PreviousMode )
  {
    v10 = (unsigned int *)(a1 + 32);
LABEL_10:
    result = RtlReadULongFromUser(v10);
    goto LABEL_8;
  }
  result = *(unsigned int *)(a1 + 32);
LABEL_8:
  *a3 = result;
  return result;
}
