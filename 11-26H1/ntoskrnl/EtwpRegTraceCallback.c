/*
 * XREFs of EtwpRegTraceCallback @ 0x140A36E90
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C7460 (CmCallbackGetKeyObjectID.c)
 *     EtwpCapturePreviousRegistryData @ 0x140A376AC (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x140A377C4 (EtwpCaptureRegistryData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegTraceCallback(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  _DWORD *v5; // r14
  PCUNICODE_STRING v6; // r12
  unsigned __int16 *v7; // r15
  unsigned __int16 v8; // r10
  __int64 v10; // rsi
  unsigned __int16 **v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  char v14; // di
  unsigned int v15; // r9d
  char *v16; // rcx
  __int64 *v17; // rdx
  PVOID **v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  ULONG v25; // r9d
  ULONGLONG v26; // rdx
  ULONG v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _EVENT_DATA_DESCRIPTOR *v31; // rcx
  __int64 v32; // rdx
  PVOID v33; // rax
  unsigned __int16 **v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  EVENT_DESCRIPTOR v37; // xmm0
  ULONG v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct _EVENT_DATA_DESCRIPTOR *v42; // rcx
  __int64 v43; // rax
  PVOID *v44; // rax
  __int64 v45; // rcx
  ULONGLONG Buffer; // rdx
  ULONG Length; // r8d
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rdx
  unsigned __int16 v51; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v52; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v61; // [rsp+68h] [rbp-98h] BYREF
  PCUNICODE_STRING ObjectName; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v65; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  char v67; // [rsp+B0h] [rbp-50h] BYREF
  char v68; // [rsp+B8h] [rbp-48h] BYREF
  char v69; // [rsp+BCh] [rbp-44h] BYREF

  ObjectName = 0LL;
  v56 = 0;
  v58 = 0;
  v4 = 0;
  v55 = 0;
  v5 = 0LL;
  v53 = 0;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v61 = 0LL;
  v8 = 0;
  P = 0LL;
  v60 = 0;
  v59 = 0;
  v51 = 0;
  v52 = 0;
  EventDescriptor = 0LL;
  switch ( 0x140000000uLL )
  {
    case 0uLL:
      if ( ((__int64)ExpPlatformBinaryLock.Header.WaitListHead.Flink & 4) != 0 )
        EtwpCapturePreviousRegistryData(a3, 0x140000000uLL);
      return 0LL;
    case 0xDuLL:
      v10 = 1LL;
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_CLOSE_KEY;
      goto LABEL_11;
    case 0xEuLL:
      v44 = *(PVOID **)(a3 + 16);
      v10 = a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_DELETE_KEY;
      Object = *v44;
      goto LABEL_10;
    case 0xFuLL:
      v10 = a3;
      v36 = *(_QWORD *)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_VALUE_KEY;
      v7 = *(unsigned __int16 **)(v36 + 8);
      v55 = *(_DWORD *)(v36 + 20);
      Object = *(PVOID *)a3;
      v53 = *(_DWORD *)(v36 + 32);
      if ( ((__int64)ExpPlatformBinaryLock.Header.WaitListHead.Flink & 2) != 0 && *(int *)(a3 + 8) >= 0 )
      {
        v8 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v36 + 24));
        v51 = v8;
      }
      v5 = *(_DWORD **)(a3 + 32);
      v4 = -15;
      goto LABEL_10;
    case 0x10uLL:
      v43 = *(_QWORD *)(a3 + 16);
      v4 = 1;
      v10 = a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v7 = *(unsigned __int16 **)(v43 + 8);
      Object = *(PVOID *)a3;
      goto LABEL_10;
    case 0x11uLL:
      v12 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
      v55 = *(_DWORD *)(v12 + 8);
      v13 = *(_DWORD *)(v12 + 24);
      goto LABEL_8;
    case 0x13uLL:
      v12 = *(_QWORD *)(a3 + 16);
      v4 = 120;
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_ENUMERATE_KEY;
      v56 = *(_DWORD *)(v12 + 8);
      v55 = *(_DWORD *)(v12 + 12);
      v13 = **(_DWORD **)(v12 + 32);
      goto LABEL_9;
    case 0x14uLL:
      v12 = *(_QWORD *)(a3 + 16);
      v4 = 120;
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
      v56 = *(_DWORD *)(v12 + 8);
      v55 = *(_DWORD *)(v12 + 12);
      v13 = **(_DWORD **)(v12 + 32);
      goto LABEL_9;
    case 0x15uLL:
      v12 = *(_QWORD *)(a3 + 16);
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_KEY;
      v55 = *(_DWORD *)(v12 + 8);
      v13 = **(_DWORD **)(v12 + 32);
LABEL_8:
      v4 = 112;
LABEL_9:
      v10 = a3;
      v53 = v13;
      if ( ((__int64)ExpPlatformBinaryLock.Header.WaitListHead.Flink & 2) == 0 || *(int *)(a3 + 8) < 0 )
        goto LABEL_10;
      v50 = *(_QWORD *)(v12 + 16);
      goto LABEL_83;
    case 0x16uLL:
      v10 = a3;
      v32 = *(_QWORD *)(a3 + 16);
      v4 = 113;
      v33 = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v7 = *(unsigned __int16 **)(v32 + 8);
      Object = v33;
      v55 = *(_DWORD *)(v32 + 16);
      v53 = **(_DWORD **)(v32 + 40);
      if ( ((__int64)ExpPlatformBinaryLock.Header.WaitListHead.Flink & 2) == 0 || *(int *)(a3 + 8) < 0 )
        goto LABEL_10;
      v50 = *(_QWORD *)(v32 + 24);
LABEL_83:
      v8 = EtwpCaptureRegistryData(&P, v50);
      v51 = v8;
      goto LABEL_10;
    case 0x17uLL:
      v45 = *(_QWORD *)(a3 + 16);
      v4 = 40;
      v10 = a3;
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      v56 = *(_DWORD *)(v45 + 16);
      v53 = **(_DWORD **)(v45 + 32);
      goto LABEL_10;
    case 0x1AuLL:
      v10 = a3;
      v34 = *(unsigned __int16 ***)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v34[1];
      if ( *(int *)(a3 + 8) >= 0 )
      {
        v35 = *(_DWORD *)v34[8];
        v61 = *(PVOID *)a3;
        v58 = v35;
      }
      v7 = *v34;
      v4 = 7;
      goto LABEL_10;
    case 0x1CuLL:
      v10 = a3;
      v11 = *(unsigned __int16 ***)(a3 + 16);
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v11[1];
      if ( *(int *)(a3 + 8) >= 0 )
        v61 = *(PVOID *)a3;
      v7 = *v11;
      v4 = 7;
      goto LABEL_10;
    case 0x1EuLL:
      v10 = a3;
      Object = *(PVOID *)a3;
      EventDescriptor = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_FLUSH_KEY;
      goto LABEL_10;
    case 0x24uLL:
      v37 = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
      goto LABEL_62;
    case 0x26uLL:
      v37 = (EVENT_DESCRIPTOR)ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
LABEL_62:
      v10 = a3;
      Object = *(PVOID *)a3;
      EventDescriptor = v37;
LABEL_10:
      if ( a3 )
      {
LABEL_11:
        if ( ((__int64)ExpPlatformBinaryLock.Header.WaitListHead.Flink & 1) != 0 )
        {
          v14 = 1;
          if ( Object )
          {
            CmCallbackGetKeyObjectID((PLARGE_INTEGER)&ExpPlatformBinaryLock.WaitBlock[1], Object, 0LL, &ObjectName);
            v8 = v51;
            v6 = ObjectName;
          }
        }
        else
        {
          v14 = 0;
        }
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&Object;
        if ( (v4 & 4) != 0 )
        {
          v66 = 8LL;
          v65 = &v61;
          v16 = &v69;
          v15 = 3;
          v17 = (__int64 *)&v68;
          v18 = (PVOID **)&v67;
        }
        else
        {
          v15 = 2;
          v16 = (char *)&v66 + 4;
          v17 = &v66;
          v18 = &v65;
        }
        if ( v10 == 1 )
          v19 = &EtwpNull;
        else
          v19 = (__int64 *)(v10 + 8);
        *v18 = (PVOID *)v19;
        *(_DWORD *)v17 = 4;
        *(_DWORD *)v16 = 0;
        if ( (v4 & 8) != 0 )
        {
          v20 = 2LL * v15++;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v56;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
        }
        if ( (v4 & 0x10) != 0 )
        {
          v21 = 2LL * v15++;
          *(&UserData.Ptr + v21) = (ULONGLONG)&v55;
          *((_QWORD *)&UserData.Size + v21) = 4LL;
        }
        if ( (v4 & 2) != 0 )
        {
          v22 = 2LL * v15++;
          *(&UserData.Ptr + v22) = (ULONGLONG)&v58;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
        }
        if ( (v4 & 0x20) != 0 )
        {
          v23 = 2LL * v15++;
          *(&UserData.Ptr + v23) = (ULONGLONG)&v53;
          *((_QWORD *)&UserData.Size + v23) = 4LL;
        }
        if ( v14 )
        {
          if ( v6 )
          {
            Buffer = (ULONGLONG)v6->Buffer;
            if ( Buffer )
            {
              Length = v6->Length;
              if ( (_WORD)Length )
              {
                v48 = 2LL * v15++;
                *(&UserData.Ptr + v48) = Buffer;
                *(&UserData.Size + 2 * v48) = Length;
                *(&UserData.Reserved + 2 * v48) = 0;
              }
            }
          }
        }
        v24 = v15;
        v25 = v15 + 1;
        v24 *= 2LL;
        *(&UserData.Ptr + v24) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v24) = 2LL;
        if ( (v4 & 1) != 0 )
        {
          if ( v7 )
          {
            v26 = *((_QWORD *)v7 + 1);
            if ( v26 )
            {
              v27 = *v7;
              if ( (_WORD)v27 )
              {
                v28 = 2LL * v25++;
                *(&UserData.Ptr + v28) = v26;
                *(&UserData.Size + 2 * v28) = v27;
                *(&UserData.Reserved + 2 * v28) = 0;
              }
            }
          }
          v29 = 2LL * v25++;
          *(&UserData.Ptr + v29) = (ULONGLONG)&EtwpNull;
          *((_QWORD *)&UserData.Size + v29) = 2LL;
        }
        if ( (v4 & 0x40) != 0 )
        {
          v30 = 2LL * v25++;
          *(&UserData.Ptr + v30) = (ULONGLONG)&v51;
          *((_QWORD *)&UserData.Size + v30) = 2LL;
          if ( v8 )
          {
            v31 = &UserData + v25++;
            v31->Ptr = (ULONGLONG)P;
            v31->Size = v8;
            v31->Reserved = 0;
          }
        }
        if ( v4 < 0 )
        {
          if ( v5 )
          {
            v49 = v5[2];
            v60 = v49;
            v59 = v5[1];
            v52 = 2048;
            if ( v49 <= 0x800 )
              v52 = v49;
          }
          v38 = v52;
          v39 = 2LL * v25;
          *(&UserData.Ptr + v39) = (ULONGLONG)&v59;
          *((_QWORD *)&UserData.Size + v39) = 4LL;
          v40 = 2LL * (v25 + 1);
          *(&UserData.Ptr + v40) = (ULONGLONG)&v60;
          *((_QWORD *)&UserData.Size + v40) = 4LL;
          v41 = v25 + 2;
          v25 += 3;
          v41 *= 2LL;
          *(&UserData.Ptr + v41) = (ULONGLONG)&v52;
          *((_QWORD *)&UserData.Size + v41) = 2LL;
          if ( (_WORD)v38 )
          {
            v42 = &UserData + v25++;
            v42->Ptr = (ULONGLONG)(v5 + 3);
            v42->Size = v38;
            v42->Reserved = 0;
          }
        }
        if ( v10 == 1 || *(int *)(v10 + 8) >= 0 )
          EventDescriptor.Level = 2;
        else
          EventDescriptor.Level = 1;
        EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, v25, &UserData);
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      break;
    default:
      return 0LL;
  }
  return 0LL;
}
