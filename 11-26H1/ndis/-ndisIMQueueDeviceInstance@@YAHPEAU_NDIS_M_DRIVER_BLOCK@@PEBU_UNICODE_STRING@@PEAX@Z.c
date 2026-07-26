/*
 * XREFs of ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14009B48C
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x14009B800 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIMQueueDeviceInstance(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        void *a3)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  int v8; // edx
  _NDIS_PENDING_IM_INSTANCE *v9; // rdi
  UNICODE_STRING *v10; // r12
  unsigned __int16 v11; // ax
  _NDIS_PENDING_IM_INSTANCE *i; // r14

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x31u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  Pool2 = ExAllocatePool2(64LL, a2->Length + 34LL, 1768178766LL);
  v9 = (_NDIS_PENDING_IM_INSTANCE *)Pool2;
  if ( Pool2 )
  {
    v10 = (UNICODE_STRING *)(Pool2 + 16);
    *(_QWORD *)(Pool2 + 8) = a3;
    v11 = a2->Length + 2;
    v10->Length = 0;
    v10->MaximumLength = v11;
    v9->Name.Buffer = (wchar_t *)&v9[1];
    RtlUpcaseUnicodeString(v10, a2, 0);
    for ( i = a1->PendingDeviceList; i; i = i->Next )
    {
      if ( RtlEqualUnicodeString(v10, &i->Name, 1u) )
      {
        ExFreePoolWithTag(v9, 0);
        v6 = 65539;
        goto LABEL_11;
      }
    }
    v9->Next = a1->PendingDeviceList;
    a1->PendingDeviceList = v9;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x32u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v6);
  return v6;
}
