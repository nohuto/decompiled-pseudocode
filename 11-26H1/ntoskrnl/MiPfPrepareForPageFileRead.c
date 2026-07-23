/*
 * XREFs of MiPfPrepareForPageFileRead @ 0x1406FBBF0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 */

__int64 MiPfPrepareForPageFileRead(__int64 *a1, __int64 a2, ...)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // [rsp+30h] [rbp-48h]
  unsigned int v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v4 = a1[1];
  v5 = a1[16];
  v6 = a1[11];
  v20 = 48 * v22 - 0x220000000000LL;
  v7 = 1;
  MiReturnCommit(v4, 1LL, 0);
  MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)va, 1, a1[15], v6, *((_DWORD *)a1 + 24));
  v9 = (unsigned __int16)v5 >> 12;
  if ( (v5 & 8) == 0 )
  {
    v21 = 0;
    LODWORD(v10) = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  if ( qword_140E2D8C0 && (v5 & 0x10) == 0 )
    v5 &= qword_140E2D8C8;
  v10 = HIDWORD(v5);
  v21 = v10;
  if ( (_DWORD)v9 != *(_DWORD *)(v4 + 1300) )
    goto LABEL_7;
LABEL_8:
  v11 = *(_QWORD *)(v4 + 8 * v9 + 22304);
  v12 = *(_DWORD *)(v6 + 188);
  if ( *((_BYTE *)a1 + 57) )
  {
    v12 |= 0x200u;
    *(_DWORD *)(v6 + 188) = v12;
  }
  v13 = v24;
  *(_QWORD *)(v6 + 272) = 0LL;
  *(_DWORD *)(v6 + 280) = 56;
  *(_QWORD *)(v6 + 304) = 0LL;
  *(_QWORD *)(v6 + 312) = 4096LL;
  *(_WORD *)(v6 + 282) |= 0x4042u;
  *(_QWORD *)(v6 + 320) = v22;
  MiObtainProtoReference(v13, 0LL, v8);
  *(_QWORD *)(v6 + 160) = v24;
  v14 = *a1;
  v15 = *a1 + 224;
  v16 = *(_QWORD *)v15;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v15;
  *(_QWORD *)v6 = v16;
  *(_QWORD *)(v16 + 8) = v6;
  *(_QWORD *)v15 = v6;
  ++*(_DWORD *)(v14 + 212);
  v17 = 0LL;
  if ( (*(_DWORD *)(a2 + 188) & 0x400000) == 0 )
    v17 = *(_QWORD *)(a2 + 208);
  *(_DWORD *)(v6 + 184) = *(_DWORD *)(v17 + 40);
  *(_QWORD *)(v6 + 232) = 0LL;
  if ( v7 )
  {
    v18 = (unsigned int)v10;
    v12 |= 0x400u;
  }
  else
  {
    v18 = (unsigned __int64)v21 << 12;
  }
  *(_QWORD *)(v6 + 96) = v18;
  *(_QWORD *)(v6 + 192) = v11;
  *(_DWORD *)(v6 + 188) = v12 | 0x400000;
  *(_QWORD *)(a2 + 216) = -1LL;
  *(_QWORD *)(v6 + 248) = a1[15];
  result = v20;
  *(_QWORD *)(v6 + 256) = v20;
  a1[11] = 0LL;
  return result;
}
