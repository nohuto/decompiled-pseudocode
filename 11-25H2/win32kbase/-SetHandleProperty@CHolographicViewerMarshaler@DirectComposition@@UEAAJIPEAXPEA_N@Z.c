/*
 * XREFs of ?SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x140238A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetHandleProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( (_DWORD)a2 == 3 )
  {
    if ( (*((_DWORD *)this + 15) & 8) != 0 || !a3 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      *((_QWORD *)this + 13) = a3;
      *((_QWORD *)this + 16) = PsGetCurrentProcess(this, a2);
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"screenDuplication");
      v9 = 0;
      if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v9) >= 0 && v9 )
        *((_DWORD *)this + 31) |= 1u;
      *((_DWORD *)this + 15) |= 8u;
      *a4 = 1;
    }
  }
  return v4;
}
