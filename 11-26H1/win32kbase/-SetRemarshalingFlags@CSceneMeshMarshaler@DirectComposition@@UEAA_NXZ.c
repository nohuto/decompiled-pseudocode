/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int v4; // eax
  int *v5; // rdx
  int *v6; // r9
  int *v7; // r8
  int *v8; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 14) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x80u;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x100u;
  else
    v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 10) )
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x200;
  }
  else
  {
    v3 = v2;
  }
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x400u;
  else
    v3 = v2;
  if ( *((_QWORD *)this + 12) )
  {
    v4 = *v2;
    v5 = (int *)((char *)this + 16);
    *v3 = v4 | 0x800;
  }
  else
  {
    v5 = v3;
  }
  if ( *((_QWORD *)this + 13) )
    *v3 |= 0x1000u;
  else
    v5 = v3;
  if ( *((_QWORD *)this + 14) )
  {
    v6 = (int *)((char *)this + 16);
    *v5 = *v3 | 0x2000;
  }
  else
  {
    v6 = v5;
  }
  if ( *((_DWORD *)this + 30) )
    *v5 |= 0x4000u;
  else
    v6 = v5;
  if ( *((_DWORD *)this + 31) )
  {
    v7 = (int *)((char *)this + 16);
    *v6 = *v5 | 0x8000;
  }
  else
  {
    v7 = v6;
  }
  if ( *((_DWORD *)this + 32) )
    *v6 |= 0x10000u;
  else
    v7 = v6;
  if ( *((_DWORD *)this + 33) )
  {
    v8 = (int *)((char *)this + 16);
    *v7 = *v6 | 0x20000;
  }
  else
  {
    v8 = v7;
  }
  if ( *((_DWORD *)this + 34) )
    *v7 |= 0x40000u;
  else
    v8 = v7;
  if ( *((_DWORD *)this + 35) )
    *v8 = *v7 | 0x80000;
  if ( *((_DWORD *)this + 36) )
    *v8 |= 0x100000u;
  return (*v8 & 0x1FFFC0) != 0;
}
