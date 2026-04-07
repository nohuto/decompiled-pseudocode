/*
 * XREFs of ?SetColor@CDWriteText@@UEAAXK@Z @ 0x180079870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWriteText::SetColor(CDWriteText *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 60) )
  {
    *((_DWORD *)this + 60) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 21) + 24LL))((char *)this - 168, 4096LL);
  }
}
