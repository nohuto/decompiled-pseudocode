/*
 * XREFs of ?vOffset@PATH_CORE@@QEAAXAEBVEPOINTL@@K@Z @ 0x14012DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PATH_CORE::vOffset(PATH_CORE *this, const struct EPOINTL *a2, char a3)
{
  int v3; // eax
  int v4; // r9d
  __int64 *v5; // rdx
  int v6; // eax
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  __int64 i; // rcx

  v3 = *((_DWORD *)a2 + 1);
  v4 = *(_DWORD *)a2;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 16 * v3;
  *((_DWORD *)this + 7) += v6;
  *((_DWORD *)this + 9) += v6;
  v7 = 16 * v4;
  *((_DWORD *)this + 6) += v7;
  *((_DWORD *)this + 8) += v7;
  v8 = v6 >> 4;
  if ( (a3 & 4) == 0 )
    v8 = v6;
  v9 = v7 >> 4;
  if ( (a3 & 4) == 0 )
    v9 = v7;
  while ( v5 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 5); i = (unsigned int)(i + 1) )
    {
      LODWORD(v5[i + 3]) += v9;
      HIDWORD(v5[i + 3]) += v8;
    }
    v5 = (__int64 *)*v5;
  }
}
