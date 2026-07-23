/*
 * XREFs of PspUpdateCreateInfo @ 0x140ADDFE4
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PspPropagateHandle @ 0x140ADE284 (PspPropagateHandle.c)
 */

__int64 __fastcall PspUpdateCreateInfo(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  char *v6; // r14
  unsigned __int8 PreviousMode; // di
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  HANDLE *v14; // rsi
  __int16 v15; // ax
  __int16 *v16; // rcx
  _QWORD *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE Src[16]; // [rsp+30h] [rbp-98h] BYREF
  char v20; // [rsp+40h] [rbp-88h]
  __int128 v21; // [rsp+48h] [rbp-80h]
  __int64 v22; // [rsp+58h] [rbp-70h]
  int v23; // [rsp+60h] [rbp-68h]
  int v24; // [rsp+64h] [rbp-64h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  int v26; // [rsp+70h] [rbp-58h]
  __int64 v27; // [rsp+78h] [rbp-50h]
  int v28; // [rsp+80h] [rbp-48h]
  int v29; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int8 v30; // [rsp+D8h] [rbp+10h]
  char *v31; // [rsp+E8h] [rbp+20h]

  v29 = a1;
  v5 = 0;
  v6 = *(char **)(a2 + 48);
  v31 = v6;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  v8 = 2LL;
  if ( (*(_BYTE *)(a2 + 16) & 2) == 0 )
    goto LABEL_16;
  v9 = (unsigned int)(v29 - 2);
  if ( v29 == 2 )
  {
    LOBYTE(v9) = PreviousMode;
    v5 = PspPropagateHandle(v9, a2 + 176, &v18);
    if ( v5 >= 0 )
    {
      v17 = v6 + 16;
      if ( !PreviousMode )
      {
        *v17 = v18;
        goto LABEL_16;
      }
LABEL_30:
      RtlWriteULong64ToUser(v17, v18);
      goto LABEL_16;
    }
LABEL_35:
    *(_QWORD *)&v18 = 0LL;
    goto LABEL_16;
  }
  if ( v29 == 3 )
  {
    v15 = *(_WORD *)(a2 + 102);
    v16 = (__int16 *)(v6 + 16);
    if ( PreviousMode )
      RtlWriteUShortToUser(v16, v15);
    else
      *v16 = v15;
    goto LABEL_16;
  }
  v10 = (unsigned int)(v29 - 5);
  if ( v29 == 5 )
  {
    LODWORD(v10) = PreviousMode;
    v5 = PspPropagateHandle(v10, a2 + 200, &v18);
    if ( v5 >= 0 )
    {
      v17 = v6 + 16;
      if ( !PreviousMode )
      {
        *v17 = v18;
        goto LABEL_16;
      }
      goto LABEL_30;
    }
    goto LABEL_35;
  }
  if ( v29 == 6 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      LOBYTE(v10) = PreviousMode;
      v5 = PspPropagateHandle(v10, a2 + 176, &v18);
      if ( v5 < 0 )
      {
        *(_QWORD *)&v18 = 0LL;
      }
      else
      {
        LOBYTE(v11) = PreviousMode;
        v5 = PspPropagateHandle(v11, a2 + 192, (char *)&v18 + 8);
        if ( v5 < 0 )
          *((_QWORD *)&v18 + 1) = 0LL;
      }
      if ( v5 < 0 )
        goto LABEL_21;
    }
    memset_0(Src, 0, 0x58uLL);
    v20 = (*(_BYTE *)(a2 + 16) >> 2) & 8 | *(_BYTE *)(a3 + 502) & 2 | (4 * (BYTE4(PspSiloMonitorLock.CycleTime) & 1)) | ((*(_BYTE *)(a3 + 1530) & 7) != 0) | ((*(_BYTE *)(a3 + 1530) & 7) != 1 ? 0 : 0x10);
    if ( (v20 & 8) != 0 )
    {
      v27 = *(_QWORD *)(a2 + 304);
      v28 = *(_DWORD *)(a2 + 312);
    }
    v21 = v18;
    v22 = *(_QWORD *)(a2 + 224);
    v23 = *(_DWORD *)(a2 + 232);
    v24 = *(_DWORD *)(*(_QWORD *)(a2 + 216) + 8LL);
    v25 = *(_QWORD *)(a3 + 736);
    v26 = *(_DWORD *)(a2 + 236);
    if ( PreviousMode )
      RtlCopyToUser(v6, Src, 0x58uLL);
    else
      RtlCopyVolatileMemory(v6, Src, 0x58uLL);
  }
LABEL_16:
  if ( v5 >= 0 )
  {
    v12 = v6 + 8;
    if ( PreviousMode )
      RtlWriteULongToUser(v12, v29);
    else
      RtlCopyVolatileMemory(v12, &v29, 4uLL);
    return 0LL;
  }
LABEL_21:
  v14 = (HANDLE *)&v18;
  do
  {
    if ( *v14 )
      ObCloseHandle(*v14, PreviousMode);
    ++v14;
    --v8;
  }
  while ( v8 );
  return (unsigned int)v5;
}
