/*
 * XREFs of ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017318 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012DC0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012E20 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     RmpWnfCreateStateNameForClient @ 0x18003056C (RmpWnfCreateStateNameForClient.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18005B854 (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005C130 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18006302C (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180063140 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x180065E10 (-HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z.c)
 *     ?HampClientValidateTokens@@YAJPEAX0@Z @ 0x18007E6A4 (-HampClientValidateTokens@@YAJPEAX0@Z.c)
 */

__int64 __fastcall HampClientStart(
        struct _HAM_CLIENT_CONTEXT *a1,
        PSID pSid,
        HANDLE TokenHandle,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a6)
{
  unsigned __int64 v6; // r15
  int v10; // r13d
  void *v11; // rdx
  int v12; // ecx
  int v13; // esi
  void *v14; // rcx
  NTSTATUS StateNameForClient; // edi
  void *v16; // rcx
  struct _HAM_CLIENT_CONNECTION_PARAMETERS *v17; // r14
  int v18; // eax
  __int64 v19; // rcx
  int v21; // esi
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // [rsp+30h] [rbp-50h] BYREF
  NTSTATUS v28; // [rsp+34h] [rbp-4Ch] BYREF
  struct _CLIENT_ID ClientId; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  int v31; // [rsp+B0h] [rbp+30h] BYREF

  v6 = a4;
  v31 = 0;
  v10 = 0;
  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) )
  {
    if ( WaitForSingleObject(*((HANDLE *)a1 + 24), 0) )
    {
      StateNameForClient = -1073741504;
      v21 = 256;
      goto LABEL_40;
    }
    v31 = *((_DWORD *)a1 + 54);
    do
    {
      HampClientReleaseLockExclusive(a1);
      RtlWaitOnAddress((char *)a1 + 216, &v31, 4LL);
      HampClientAcquireLockExclusive(a1);
    }
    while ( *((_DWORD *)a1 + 54) == v31 );
    if ( *((_DWORD *)a1 + 50) )
    {
      StateNameForClient = -1073741504;
      v21 = 512;
      goto LABEL_40;
    }
  }
  if ( *((_DWORD *)a1 + 40) != a5 )
  {
    StateNameForClient = -1073741504;
    v21 = 768;
    goto LABEL_40;
  }
  v11 = (void *)*((_QWORD *)a1 + 23);
  if ( v11 )
  {
    StateNameForClient = HampClientValidateTokens(TokenHandle, v11);
    if ( StateNameForClient < 0 )
    {
      v21 = 1024;
      goto LABEL_40;
    }
  }
  if ( !(unsigned int)HampClientTypeReceivesCallbacks(*((unsigned __int8 *)a1 + 164)) || (*((_BYTE *)a1 + 144) & 1) != 0 )
    goto LABEL_5;
  if ( !v12 )
    goto LABEL_34;
  v22 = v12 - 1;
  if ( !v22 )
    goto LABEL_34;
  v23 = v22 - 1;
  if ( !v23 )
  {
    v13 = 64;
    goto LABEL_35;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
LABEL_34:
    v13 = 64;
    goto LABEL_35;
  }
  if ( v24 != 3 )
  {
LABEL_5:
    v13 = 0;
    goto LABEL_6;
  }
  v13 = 544;
LABEL_35:
  StateNameForClient = RmpWnfCreateStateNameForClient(pSid);
  if ( StateNameForClient < 0 )
  {
    v21 = 1280;
    goto LABEL_40;
  }
  StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList((char *)a1 + 128);
  if ( StateNameForClient < 0 )
  {
    v21 = 1536;
    goto LABEL_40;
  }
LABEL_6:
  v14 = (void *)*((_QWORD *)a1 + 23);
  if ( v14 )
    NtClose(v14);
  if ( TokenHandle )
  {
    StateNameForClient = RmpSystemDuplicateHandle(TokenHandle, 8u, (PHANDLE)a1 + 23);
    if ( StateNameForClient < 0 )
    {
      v21 = 1792;
      goto LABEL_40;
    }
  }
  v16 = (void *)*((_QWORD *)a1 + 24);
  if ( v16 )
    NtClose(v16);
  if ( (_DWORD)v6 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = (HANDLE)v6;
    memset(&ObjectAttributes.RootDirectory, 0, 40);
    StateNameForClient = NtOpenProcess((PHANDLE)a1 + 24, 0x101000u, &ObjectAttributes, &ClientId);
    if ( StateNameForClient < 0 )
    {
      v21 = 2048;
      goto LABEL_40;
    }
  }
  v17 = a6;
  if ( !*((_BYTE *)a1 + 164) )
  {
    StateNameForClient = HampClientSerializeActivities(a1, a6);
    if ( StateNameForClient < 0 )
    {
      v21 = 2304;
LABEL_40:
      HampClientReleaseLockExclusive(a1);
      if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
      {
        v27 = v21;
        v28 = StateNameForClient;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1800E12B0,
          (unsigned int)&unk_1800D09EC,
          v25,
          v26,
          (__int64)&v28,
          (__int64)&v27);
      }
      return (unsigned int)StateNameForClient;
    }
  }
  *((_DWORD *)a1 + 44) = v6;
  *((_DWORD *)a1 + 50) = 2 - (*((_WORD *)a1 + 110) != 0);
  v18 = *((_DWORD *)a1 + 36);
  if ( (v18 & 2) != 0 )
  {
    v10 = 1;
    *((_DWORD *)a1 + 36) = v18 & 0xFFFFFFFD;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  if ( v17 && v13 )
    *((_QWORD *)v17 + 3) = *((_QWORD *)a1 + 15);
  HampClientReleaseLockExclusive(a1);
  v19 = *((_QWORD *)a1 + 26);
  if ( v19 )
    TpWaitForTimer(v19, 1LL);
  StateNameForClient = 0;
  if ( v10 )
    CemRcObjectDereference(a1);
  return (unsigned int)StateNameForClient;
}
