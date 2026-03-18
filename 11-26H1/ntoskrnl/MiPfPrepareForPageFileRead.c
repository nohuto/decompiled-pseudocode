/*
 * XREFs of MiPfPrepareForPageFileRead @ 0x1406F6F80
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 */

__int64 MiPfPrepareForPageFileRead(__int64 *a1, __int64 a2, ...)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned int v20; // [rsp+80h] [rbp+8h]
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v23; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v4 = a1[1];
  v5 = a1[16];
  v6 = a1[11];
  v19 = 48 * v21 - 0x220000000000LL;
  v7 = 1;
  MiReturnCommit(v4, 1LL, 0);
  MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, (__int64 *)va, 1, a1[15], v6, *((_DWORD *)a1 + 24));
  v8 = (unsigned __int16)v5 >> 12;
  if ( (v5 & 8) == 0 )
  {
    v20 = 0;
    LODWORD(v9) = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  if ( qword_140E2D740 && (v5 & 0x10) == 0 )
    v5 &= qword_140E2D748;
  v9 = HIDWORD(v5);
  v20 = v9;
  if ( (_DWORD)v8 != *(_DWORD *)(v4 + 1300) )
    goto LABEL_7;
LABEL_8:
  v10 = *(_QWORD *)(v4 + 8 * v8 + 22304);
  v11 = *(_DWORD *)(v6 + 188);
  if ( *((_BYTE *)a1 + 57) )
  {
    v11 |= 0x200u;
    *(_DWORD *)(v6 + 188) = v11;
  }
  v12 = v23;
  *(_QWORD *)(v6 + 272) = 0LL;
  *(_DWORD *)(v6 + 280) = 56;
  *(_QWORD *)(v6 + 304) = 0LL;
  *(_QWORD *)(v6 + 312) = 4096LL;
  *(_WORD *)(v6 + 282) |= 0x4042u;
  *(_QWORD *)(v6 + 320) = v21;
  MiObtainProtoReference(v12, 0);
  *(_QWORD *)(v6 + 160) = v23;
  v13 = *a1;
  v14 = *a1 + 224;
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v14;
  *(_QWORD *)v6 = v15;
  *(_QWORD *)(v15 + 8) = v6;
  *(_QWORD *)v14 = v6;
  ++*(_DWORD *)(v13 + 212);
  v16 = 0LL;
  if ( (*(_DWORD *)(a2 + 188) & 0x400000) == 0 )
    v16 = *(_QWORD *)(a2 + 208);
  *(_DWORD *)(v6 + 184) = *(_DWORD *)(v16 + 40);
  *(_QWORD *)(v6 + 232) = 0LL;
  if ( v7 )
  {
    v17 = (unsigned int)v9;
    v11 |= 0x400u;
  }
  else
  {
    v17 = (unsigned __int64)v20 << 12;
  }
  *(_QWORD *)(v6 + 96) = v17;
  *(_QWORD *)(v6 + 192) = v10;
  *(_DWORD *)(v6 + 188) = v11 | 0x400000;
  *(_QWORD *)(a2 + 216) = -1LL;
  *(_QWORD *)(v6 + 248) = a1[15];
  result = v19;
  *(_QWORD *)(v6 + 256) = v19;
  a1[11] = 0LL;
  return result;
}
