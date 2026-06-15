/*
 * XREFs of ?SerializeEventHeaderFromApplicationMap@CCaptureNotifier@@AEAAXPEAEK@Z @ 0x180076F8C
 * Callers:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180076EC8 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCaptureNotifier::SerializeEventHeaderFromApplicationMap(CCaptureNotifier *this, unsigned __int8 *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // r11d
  __int64 *v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  __int64 **v9; // rdx
  __int64 *i; // rcx
  __int64 *j; // rdx

  *(_DWORD *)a2 = 2;
  v3 = 0;
  v4 = 8;
  v5 = (__int64 *)**((_QWORD **)this + 10);
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 8) )
    {
      if ( v3 >= 0x331 )
        break;
      v6 = *((_DWORD *)v5 + 9);
      v7 = v6 != 0;
      if ( *((_DWORD *)v5 + 10) )
        v7 = (v6 != 0) + 2;
      v8 = v4;
      v4 += 5;
      ++v3;
      *(_DWORD *)&a2[v8] = *((_DWORD *)v5 + 7);
      a2[v8 + 4] = v7;
    }
    v9 = (__int64 **)v5[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  *((_DWORD *)a2 + 1) = v3;
}
