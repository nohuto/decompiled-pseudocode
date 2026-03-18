/*
 * XREFs of ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402F97A4
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::UpdateLastActiveEntry(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        int a3)
{
  bool v3; // zf
  __int64 v5; // rdi
  unsigned int v7; // r10d
  int v8; // r9d
  char *v9; // rcx
  unsigned int v10; // r11d
  _DWORD *v11; // r8
  int v12; // eax

  v3 = *((_BYTE *)this + 302129) == 0;
  v5 = a2;
  *((_BYTE *)this + 302152) = 0;
  if ( v3 )
  {
    v7 = 0;
    v8 = 1;
    v9 = (char *)this + 44;
    while ( v8 )
    {
      if ( v9[60] )
      {
        v10 = 0;
        if ( *(_DWORD *)v9 )
        {
          v11 = v9 + 100;
          do
          {
            if ( !v8 )
              break;
            v12 = 0;
            if ( !*v11 )
              v12 = v8;
            ++v10;
            v11 += 18;
            v8 = v12;
          }
          while ( v10 < *(_DWORD *)v9 );
        }
      }
      ++v7;
      v9 += 4720;
      if ( v7 >= 0x40 )
      {
        if ( v8 )
        {
          *((LARGE_INTEGER *)this + 37767) = KeQueryPerformanceCounter(0LL);
          *((_DWORD *)this + 75536) = v5;
          *((_DWORD *)this + 75537) = a3;
          *((_BYTE *)this + 302152) = 1;
          *((_BYTE *)this + 302153) = *((_DWORD *)this + 1180 * v5 + 27) > 0;
        }
        return;
      }
    }
  }
}
