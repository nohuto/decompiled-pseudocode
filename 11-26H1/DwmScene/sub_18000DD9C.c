/*
 * XREFs of sub_18000DD9C @ 0x18000DD9C
 * Callers:
 *     sub_18000DA44 @ 0x18000DA44 (sub_18000DA44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000EF94 @ 0x18000EF94 (sub_18000EF94.c)
 *     sub_1800100A4 @ 0x1800100A4 (sub_1800100A4.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18000DD9C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, __int64 a6, _QWORD *a7)
{
  unsigned int v10; // ebx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  _OWORD v15[10]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  memset(v15, 0, 0x98uLL);
  OutputString[0] = 0;
  v16[0] = 0;
  *((_QWORD *)&v15[0] + 1) = *a7;
  v10 = sub_1800100A4();
  LODWORD(v15[0]) = 1;
  v11 = 0;
  if ( *(_DWORD *)(v12 + 8) == 1 )
    v11 = 8;
  DWORD1(v15[0]) = v11;
  LODWORD(v15[1]) = _InterlockedIncrement(&dword_1801C83A8);
  *((_QWORD *)&v15[1] + 1) = 0LL;
  LODWORD(v15[2]) = GetCurrentThreadId();
  *((_QWORD *)&v15[3] + 1) = a3;
  v15[4] = __PAIR64__(v10, a2);
  *((_QWORD *)&v15[2] + 1) = 0LL;
  *(_QWORD *)&v15[3] = 0LL;
  *((_QWORD *)&v15[8] + 1) = a6;
  *(_QWORD *)&v15[9] = a1;
  memset(&v15[5], 0, 48);
  if ( qword_1801C8450 )
    *(_QWORD *)&v15[8] = qword_1801C8450(v13);
  else
    *(_QWORD *)&v15[8] = 0LL;
  if ( qword_1801C83D8 )
    qword_1801C83D8(v15);
  if ( qword_1801C8408 )
    qword_1801C8408(v15, v16, 1024LL);
  if ( qword_1801C8400 )
    qword_1801C8400(v15);
  if ( qword_1801C8428 && (BYTE4(v15[0]) & 2) == 0 )
    qword_1801C8428(v15);
  if ( (SDWORD2(v15[0]) & 0x80000000) == 0 )
    sub_180010F3C(v13);
  if ( !byte_1801C83C0
    && (!qword_1801C83B0 ? (v14 = !IsDebuggerPresent()) : (v14 = (unsigned __int8)qword_1801C83B0(v13) == 0), v14)
    || (BYTE4(v15[0]) & 2) != 0 )
  {
    if ( qword_1801C83C8 && !byte_1801C83E8 )
      qword_1801C83C8(v15, 0LL, 0LL);
  }
  else
  {
    if ( qword_1801C83C8 && !byte_1801C83E8 )
      qword_1801C83C8(v15, OutputString, 2048LL);
    if ( !OutputString[0] )
      sub_18000EF94(OutputString, 2048LL, v15);
    OutputDebugStringW(OutputString);
  }
  if ( ((BYTE4(v15[0]) & 4) != 0 || byte_1801C83D0) && qword_1801C8418 )
    qword_1801C8418(v13);
  if ( (BYTE4(v15[0]) & 1) != 0 )
    sub_180010D50(v15);
}
