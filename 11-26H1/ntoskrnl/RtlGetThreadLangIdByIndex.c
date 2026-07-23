/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x1404E8250
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // r14
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *Teb; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _WORD *v12; // rbx

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v10 = Teb[762];
  if ( v10 )
  {
    ProbeForRead((volatile void *)v10, 0x40uLL, 4u);
    v11 = *(_QWORD *)(v10 + 24);
    if ( v11 )
    {
      v7 = *(unsigned __int16 *)(v10 + 4);
      if ( a2 < v7 )
      {
        v12 = (_WORD *)(v11 + 6LL * a2);
        ProbeForRead(v12, 6uLL, 2u);
        if ( (unsigned __int16)*(_DWORD *)v12 == 1 )
          v6 = v12[2];
        else
          v5 = -1073741595;
      }
    }
  }
  *a3 = v6;
  if ( a4 )
    *a4 = v7;
  if ( !v5 && !v6 )
    return (unsigned int)-1073741275;
  return v5;
}
