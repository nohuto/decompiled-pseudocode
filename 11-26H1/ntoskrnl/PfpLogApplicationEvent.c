/*
 * XREFs of PfpLogApplicationEvent @ 0x14043FAA0
 * Callers:
 *     PfCalculateProcessHash @ 0x1409D2980 (PfCalculateProcessHash.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     PfpPartitionReferenceParentSafeByProcess @ 0x14043FCD0 (PfpPartitionReferenceParentSafeByProcess.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140B42E8C (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, __int128 *a2)
{
  __int64 v4; // rax
  char v5; // r11
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned int SessionId; // eax
  int v21; // edx
  int v22; // ebx
  __int64 v23; // rcx
  int v24; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  int v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  PVOID v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+88h] [rbp-78h]
  unsigned __int16 v37; // [rsp+8Ch] [rbp-74h]
  _WORD v38[989]; // [rsp+8Eh] [rbp-72h] BYREF
  __int64 v39; // [rsp+848h] [rbp+748h]

  *(_QWORD *)v26 = 0LL;
  v27 = 0LL;
  v4 = PfpPartitionReferenceParentSafeByProcess(v26, a1);
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v26;
    if ( *(_QWORD *)v26 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v26 + 600LL) < *(_DWORD *)(*(_QWORD *)v26 + 604LL) )
      {
        v10 = *(unsigned int *)(a1 + 464);
        v11 = *(_QWORD *)(a1 + 504);
        v39 = 0LL;
        if ( v5 )
        {
          v23 = *(_QWORD *)(a1 + 464) ^ v11;
          v21 = 14;
          *(_QWORD *)v28 = v10;
          LODWORD(v30) = v10;
          v24 = *(_DWORD *)(a1 + 900);
          v29 = v23 & 0x1FFFFFFFFFFFFFFFLL;
          v22 = 24;
          HIDWORD(v30) = v24;
        }
        else
        {
          v35 = v10;
          v12 = &v27;
          v32 = v10;
          v28[1] = 0;
          if ( a2 )
            v12 = a2;
          v36 = 0;
          v13 = (*(_QWORD *)(a1 + 464) ^ v11) & 0x1FFFFFFFFFFFFFFFLL;
          v38[0] = 0;
          v14 = *(_DWORD *)(a1 + 900);
          v33 = v13;
          v31 = v14;
          DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v12);
          v17 = *v16;
          v18 = *((_QWORD *)v16 + 1);
          v19 = v17;
          v34 = DirectoryFrameFromProcess;
          if ( (unsigned int)v17 > 0x7C0 )
            v19 = 1984;
          v37 = v19 >> 1;
          memmove(v38, (const void *)(v17 + v18 - v19), v19);
          v38[v37] = 0;
          v28[0] = PsGetSessionId(a1);
          SessionId = PsGetSessionId(a1);
          v21 = 1;
          v22 = v19 + 64;
          v30 = PsIdleProcess;
          v29 = SessionId;
        }
        LODWORD(Size) = v22;
        v8 = PfLogEvent(
               v7,
               v21,
               HIDWORD(stru_140E66D40.WriteOperationCount)
             + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                             + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
               v28,
               Size);
        goto LABEL_4;
      }
    }
  }
  v8 = -1073741637;
  if ( v4 )
LABEL_4:
    PsDereferencePartition(v6);
  return v8;
}
