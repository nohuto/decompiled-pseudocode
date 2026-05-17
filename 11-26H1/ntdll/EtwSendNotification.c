/*
 * XREFs of EtwSendNotification @ 0x1800E0E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E1108 (EtwpReceiveReplyDataBlock.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, int a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  char v5; // r14
  int v8; // esi
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v13; // edi
  ULONG v15; // r15d
  void *v16; // r14
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rax
  int v21; // [rsp+40h] [rbp-C0h]
  ULONG v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  ULONG *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  v27 = a4;
  v26 = a5;
  v24 = 0;
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v8 )
      v8 = 60000;
  }
  v10 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, &v24);
  if ( v10 )
    v13 = RtlNtStatusToDosError(v10);
  else
    v13 = 0;
  if ( v5 )
  {
    v15 = *(_DWORD *)(a1 + 20);
    if ( v13 )
    {
      if ( (unsigned int)dword_1801C5700 > 2
        && (byte_1801C5710 & 0xA) != 0
        && (qword_1801C5718 & 0xA) == qword_1801C5718 )
      {
        v31 = 16LL;
        v30 = a1 + 40;
        v23 = *(_DWORD *)a1;
        v32 = &v23;
        v34 = &v22;
        v33 = 4LL;
        v22 = v13;
        v35 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801C5700, byte_18019C060, v11, v12, 5, (__int64)v29);
      }
    }
    else
    {
      v16 = *(void **)(a1 + 24);
      if ( v15 )
      {
        v17 = 120;
        memset_thunk_772440563353939046(v28, 0, 0x78uLL);
        if ( (unsigned int)dword_1801C5700 > 5
          && (byte_1801C5710 & 0xA) != 0
          && (qword_1801C5718 & 0xA) == qword_1801C5718 )
        {
          v31 = 16LL;
          v30 = a1 + 40;
          v25 = *(_DWORD *)a1;
          v34 = &v22;
          v32 = &v25;
          v36 = &v23;
          v33 = 4LL;
          v22 = v15;
          v35 = 4LL;
          v23 = v8;
          v37 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801C5700, byte_18019C0AF, v18, v19, 6, (__int64)v29);
        }
        v20 = v28;
        v21 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 != 3 )
          v17 = a2;
        if ( v21 != 3 )
          v20 = a3;
        LOBYTE(v18) = v21 == 3;
        v13 = EtwpReceiveReplyDataBlock((_DWORD)v16, v8, v18, v15, (__int64)v20, v17, v27, v26, v21);
      }
      if ( v16 )
        NtClose(v16);
    }
  }
  return v13;
}
