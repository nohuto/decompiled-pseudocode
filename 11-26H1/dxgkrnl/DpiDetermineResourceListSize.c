/*
 * XREFs of DpiDetermineResourceListSize @ 0x14024B078
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFilterOutVgaResources @ 0x14024B83C (DpiFilterOutVgaResources.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDetermineResourceListSize(_DWORD *a1, int *a2)
{
  int v3; // r8d
  _DWORD *v4; // rdx
  __int64 v5; // r10
  unsigned int v6; // eax
  _DWORD *v7; // r9
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax

  if ( a1 )
  {
    v4 = a1 + 1;
    v3 = 4;
    if ( *a1 )
    {
      v5 = (unsigned int)*a1;
      do
      {
        v6 = v4[3];
        v7 = v4 + 4;
        v8 = 16;
        if ( v6 )
        {
          v9 = v6;
          do
          {
            v10 = 20LL;
            if ( *(_BYTE *)v7 == 5 )
              v10 = (unsigned int)(v7[1] + 20);
            v8 += v10;
            v7 = (_DWORD *)((char *)v7 + v10);
            --v9;
          }
          while ( v9 );
        }
        v3 += v8;
        v4 = (_DWORD *)((char *)v4 + v8);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    v3 = 0;
  }
  *a2 = v3;
}
