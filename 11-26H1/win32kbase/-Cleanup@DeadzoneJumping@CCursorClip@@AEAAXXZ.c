/*
 * XREFs of ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x14008F720
 * Callers:
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x14008F578 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x14008FA0C (--1CCursorClip@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CCursorClip::DeadzoneJumping::Cleanup(char **this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  char *v5; // rcx
  char *v6; // rbx
  char *v7; // rbx

  v4 = *this;
  if ( *this )
  {
    do
    {
      v5 = (char *)*((_QWORD *)v4 + 3);
      if ( v5 )
      {
        do
        {
          v6 = *(char **)v5;
          GreDeleteFastMutex(v5, a2, a3, a4);
          v5 = v6;
        }
        while ( v6 );
      }
      v7 = *(char **)v4;
      GreDeleteFastMutex(v4, a2, a3, a4);
      v4 = v7;
    }
    while ( v7 );
  }
}
