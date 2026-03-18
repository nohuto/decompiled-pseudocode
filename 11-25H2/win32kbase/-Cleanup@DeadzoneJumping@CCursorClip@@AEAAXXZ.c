/*
 * XREFs of ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1400CFA70
 * Callers:
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1400CF650 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x1400CFA3C (--1CCursorClip@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall CCursorClip::DeadzoneJumping::Cleanup(char **this)
{
  char *v1; // rdi
  char *v2; // rcx
  char *v3; // rbx
  char *v4; // rbx

  v1 = *this;
  if ( *this )
  {
    do
    {
      v2 = (char *)*((_QWORD *)v1 + 3);
      if ( v2 )
      {
        do
        {
          v3 = *(char **)v2;
          GreDeleteFastMutex(v2);
          v2 = v3;
        }
        while ( v3 );
      }
      v4 = *(char **)v1;
      GreDeleteFastMutex(v1);
      v1 = v4;
    }
    while ( v4 );
  }
}
