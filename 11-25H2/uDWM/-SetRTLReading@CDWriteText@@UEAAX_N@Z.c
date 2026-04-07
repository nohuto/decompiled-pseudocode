/*
 * XREFs of ?SetRTLReading@CDWriteText@@UEAAX_N@Z @ 0x1800808F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWriteText::SetRTLReading(CDWriteText *this, char a2)
{
  if ( *((_BYTE *)this + 256) != a2 )
  {
    *((_BYTE *)this + 256) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 21) + 24LL))((char *)this - 168, 4096LL);
  }
}
