/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140AC2C4C
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceControlCallback @ 0x140AC29B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PoStoreRequester @ 0x1404263B8 (PoStoreRequester.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopGetCallerContextFromBuffer @ 0x140ABDDA8 (PopGetCallerContextFromBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 v4; // rcx
  __int64 Pool2; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG v19; // r9d
  __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v36; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  int *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int16 *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int16 *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  __int64 v62; // [rsp+170h] [rbp+70h]
  int v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+17Ch] [rbp+7Ch]
  char v65; // [rsp+1F0h] [rbp+F0h] BYREF

  v32 = a2;
  v20 = 0;
  v35 = 0LL;
  v21 = 0;
  v36 = 0LL;
  *(_DWORD *)(&v34.MaximumLength + 1) = 0;
  if ( PopDiagHandleRegistered )
  {
    v3 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v3 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v3) )
    {
      v33 = 0LL;
      *(_DWORD *)&v34.Length = 1441792;
      v22 = **(_DWORD **)(v32 + 96);
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v4 = *(_QWORD *)(v32 + 96);
      v34.Buffer = (wchar_t *)&v65;
      PoStoreRequester(v4, 0LL, &v33, 0);
      Pool2 = ExAllocatePool2(0x100uLL);
      v6 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v32 + 96), Pool2, &v33, 0) >= 0 )
        {
          PopGetCallerContextFromBuffer((__int64)v6, &v34, (__int64)&v35, &v36);
          v7 = v32;
          if ( v22 )
          {
            v23 = v6[6];
            v24 = *(_DWORD *)(v32 + 16);
          }
          if ( !*(_QWORD *)(v32 + 96) )
            v25 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 2) != 0 )
            v26 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 1) != 0 )
            v27 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 4) != 0 )
            v28 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 8) != 0 )
            v29 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 0x10) != 0 )
            v30 = 1;
          if ( (*(_DWORD *)(v32 + 20) & 0x20) != 0 )
            v31 = 1;
          v8 = v36.Length >> 1;
          UserData.Ptr = (ULONGLONG)&v32;
          v38 = &v22;
          v40 = &v23;
          v42 = &v24;
          v44 = &v25;
          v46 = &v26;
          v48 = &v27;
          v50 = &v28;
          v52 = v32 + 44;
          v56 = v32 + 48;
          v58 = &v20;
          v59 = 2LL;
          v61 = 2LL;
          v9 = 13;
          v60 = &v21;
          v20 = (unsigned __int16)v35 >> 1;
          v21 = v36.Length >> 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v54 = v32 + 40;
          v55 = 4LL;
          v57 = 4LL;
          if ( (unsigned __int16)v35 >> 1 )
          {
            v9 = 14;
            v62 = *((_QWORD *)&v35 + 1);
            v64 = 0;
            v63 = 2 * ((unsigned __int16)v35 >> 1);
          }
          if ( (_WORD)v8 )
          {
            v10 = 2LL * v9;
            *(&UserData.Ptr + v10) = (ULONGLONG)v36.Buffer;
            *(&UserData.Reserved + 2 * v10) = 0;
            *(&UserData.Size + 2 * v10) = 2 * v8;
            ++v9;
          }
          v11 = 2LL * v9;
          v12 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v11) = (ULONGLONG)&v29;
          *((_QWORD *)&UserData.Size + v11) = 4LL;
          v13 = v9 + 1;
          v14 = v9 + 2;
          v13 *= 2LL;
          *(&UserData.Ptr + v13) = (ULONGLONG)&v30;
          *((_QWORD *)&UserData.Size + v13) = 4LL;
          v15 = 2LL * v14;
          *(&UserData.Ptr + v15) = (ULONGLONG)&v31;
          *((_QWORD *)&UserData.Size + v15) = 4LL;
          v16 = v14 + 1;
          v14 += 2;
          v16 *= 2LL;
          *(&UserData.Ptr + v16) = v7 + 52;
          *((_QWORD *)&UserData.Size + v16) = 4LL;
          v17 = 2LL * v14;
          *(&UserData.Ptr + v17) = v7 + 56;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          v18 = v14 + 1;
          v19 = v14 + 2;
          v18 *= 2LL;
          *(&UserData.Ptr + v18) = v7 + 60;
          *((_QWORD *)&UserData.Size + v18) = 4LL;
          if ( !a1 )
            v12 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v12, 0LL, v19, &UserData);
        }
        ExFreePoolWithTag(v6, 0x50455654u);
      }
    }
  }
}
