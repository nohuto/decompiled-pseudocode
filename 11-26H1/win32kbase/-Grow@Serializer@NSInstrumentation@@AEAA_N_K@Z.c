/*
 * XREFs of ?Grow@Serializer@NSInstrumentation@@AEAA_N_K@Z @ 0x1401EF848
 * Callers:
 *     ??$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE274 (--$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ??$Serialize@_K@Serializer@NSInstrumentation@@QEAA_NAEA_K@Z @ 0x1401EE2C4 (--$Serialize@_K@Serializer@NSInstrumentation@@QEAA_NAEA_K@Z.c)
 *     ??$Serialize@_N@Serializer@NSInstrumentation@@QEAA_NAEA_N@Z @ 0x1401EE314 (--$Serialize@_N@Serializer@NSInstrumentation@@QEAA_NAEA_N@Z.c)
 *     ?AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z @ 0x1401EE414 (-AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall NSInstrumentation::Serializer::Grow(NSInstrumentation::Serializer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 Pool2; // rax
  char *v5; // rsi
  char *v6; // rax
  bool result; // al

  v2 = a2;
  if ( 2LL * *((_QWORD *)this + 3) > a2 )
    v2 = 2LL * *((_QWORD *)this + 3);
  if ( !*(_QWORD *)this )
  {
    if ( v2 <= 0x1000 )
      v2 = 4096LL;
    Pool2 = ExAllocatePool2(258LL, 4096LL, 1682535253LL);
    *(_QWORD *)this = Pool2;
    v5 = (char *)Pool2;
    if ( Pool2 )
      goto LABEL_11;
    return 0;
  }
  v6 = (char *)ExAllocatePool2(258LL, v2, 1682535253LL);
  v5 = v6;
  if ( !v6 )
    return 0;
  memmove(v6, *(const void **)this, *((_QWORD *)this + 3));
  ExFreePoolWithTag(*(PVOID *)this, 0);
  *(_QWORD *)this = v5;
LABEL_11:
  *((_QWORD *)this + 3) = v2;
  result = 1;
  *((_QWORD *)this + 1) = &v5[*((_QWORD *)this + 2)];
  return result;
}
