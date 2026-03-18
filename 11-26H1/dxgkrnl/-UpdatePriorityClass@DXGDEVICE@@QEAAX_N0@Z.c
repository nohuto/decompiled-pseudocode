/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z @ 0x1403E4130
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1400599C0 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z @ 0x140192EFC (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  DXGCONTEXT *v1; // rdi
  DXGCONTEXT *i; // rbx
  DXGCONTEXT *v3; // rdx
  unsigned int v4; // edx
  DXGCONTEXT *v5; // rcx

  v1 = (DXGDEVICE *)((char *)this + 496);
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 62); ; i = *(DXGCONTEXT **)i )
  {
    v3 = 0LL;
    if ( i != v1 )
      v3 = i;
    if ( !v3 )
      break;
    v4 = *((_DWORD *)v3 + 106);
    v5 = i;
    if ( i == v1 )
      v5 = 0LL;
    DXGCONTEXT::SetSchedulingPriority(v5, v4);
  }
}
