/*
 * XREFs of PspProcessSuspendThreadParameters @ 0x1404EA760
 * Callers:
 *     NtChangeThreadState @ 0x140949110 (NtChangeThreadState.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall PspProcessSuspendThreadParameters(int a1, __int64 a2, unsigned int a3, char a4, int *a5)
{
  char v7; // r15
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // edx
  void *v13; // rdx
  int v14; // edx
  int v15; // r8d
  _OWORD v16[4]; // [rsp+28h] [rbp-40h] BYREF

  v7 = a1;
  *(_OWORD *)a5 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || (a3 & 0xF) != 0 )
    return (unsigned int)-1073741811;
  v8 = a3 >> 4;
  v9 = 0;
  v10 = 0;
  LOBYTE(v11) = 0;
  while ( v10 < v8 )
  {
    v16[0] = 0LL;
    v13 = (void *)(a2 + 16LL * v10);
    if ( a4 )
      RtlCopyFromUser(v16, v13, 0x10uLL);
    else
      RtlCopyVolatileMemory(v16, v13, 0x10uLL);
    if ( (*(_QWORD *)&v16[0] & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      return (unsigned int)-1073741811;
    if ( !LOBYTE(v16[0]) )
      return (unsigned int)-1073741811;
    if ( LOBYTE(v16[0]) >= 2uLL )
      return (unsigned int)-1073741811;
    v14 = *a5;
    v15 = 1 << SLOBYTE(v16[0]);
    if ( ((1 << SLOBYTE(v16[0])) & *a5) != 0 )
      return (unsigned int)-1073741811;
    if ( LOBYTE(v16[0]) == 1LL )
      *((_QWORD *)a5 + 1) = *((_QWORD *)&v16[0] + 1);
    v11 = v15 | v14;
    *a5 = v11;
    ++v10;
  }
  if ( (v11 & 2) != 0 && (v7 & 1) == 0 )
    return (unsigned int)-1073741811;
  return v9;
}
