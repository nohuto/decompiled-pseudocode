/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801CE440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  CInteractionContextWrapper *v1; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v4; // [rsp+60h] [rbp+27h]
  int v5; // [rsp+68h] [rbp+2Fh]
  int v6; // [rsp+6Ch] [rbp+33h]
  CInteractionContextWrapper **v7; // [rsp+70h] [rbp+37h]
  __int64 v8; // [rsp+78h] [rbp+3Fh]

  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 80) &= ~1u;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 144) &= ~1u;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 208) &= ~1u;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 1065353216LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v1 = this;
    v7 = &v1;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1803DC888;
    EventDescriptor.Keyword = 2LL;
    v8 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1803DC888;
    v4 = &unk_1803B6A68;
    UserData.Reserved = 2;
    v5 = 51;
    v6 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
