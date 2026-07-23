/*
 * XREFs of _CmIsDeviceRegPropWritable @ 0x140AEFD44
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     _CmDevicePropertyWrite @ 0x1404BFA44 (_CmDevicePropertyWrite.c)
 */

__int64 __fastcall CmIsDeviceRegPropWritable(__int64 a1, int a2)
{
  bool v2; // zf
  bool v3; // al
  unsigned int v4; // r9d
  bool *v5; // r8

  if ( (unsigned int)(a2 - 1) > 0x24 )
    return (unsigned int)-1073741264;
  if ( a2 > 19 )
  {
    if ( a2 > 29 )
    {
      v2 = a2 == 30;
      a1 = (unsigned int)(a2 - 30);
LABEL_5:
      if ( v2 )
        goto LABEL_13;
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
LABEL_10:
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
      a1 = (unsigned int)(a1 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( a2 == 29 )
      goto LABEL_13;
    a1 = (unsigned int)(a2 - 20);
    if ( a2 == 20 )
      goto LABEL_13;
    a1 = (unsigned int)(a2 - 21);
    if ( a2 == 21 )
      goto LABEL_13;
    a1 = (unsigned int)(a2 - 22);
    if ( a2 == 22 )
      goto LABEL_13;
    a1 = (unsigned int)(a2 - 23);
    if ( a2 == 23 )
      goto LABEL_13;
    a1 = (unsigned int)(a2 - 24);
    if ( a2 == 24 )
      goto LABEL_13;
    LODWORD(a1) = a2 - 25;
    if ( a2 != 25 )
      goto LABEL_10;
    return (unsigned int)-1073741264;
  }
  if ( a2 == 19 )
    goto LABEL_13;
  if ( a2 > 9 )
  {
    a1 = (unsigned int)(a2 - 10);
    if ( a2 == 10 )
      goto LABEL_13;
    v2 = a2 == 11;
    a1 = (unsigned int)(a2 - 11);
    goto LABEL_5;
  }
  if ( a2 == 9 )
    goto LABEL_13;
  if ( !a2 )
    return (unsigned int)-1073741264;
  a1 = (unsigned int)(a2 - 1);
  if ( a2 == 1 )
    goto LABEL_13;
  a1 = (unsigned int)(a2 - 2);
  if ( a2 == 2 )
    goto LABEL_13;
  a1 = (unsigned int)(a2 - 3);
  if ( a2 == 3 )
    goto LABEL_13;
  if ( a2 == 4 )
    return (unsigned int)-1073741264;
  a1 = (unsigned int)(a2 - 5);
  if ( a2 == 5 )
    goto LABEL_13;
  if ( a2 == 6 )
    return (unsigned int)-1073741264;
  a1 = (unsigned int)(a2 - 7);
  if ( a2 == 7 )
    return (unsigned int)-1073741264;
LABEL_12:
  if ( (_DWORD)a1 != 1 )
    return (unsigned int)-1073741264;
LABEL_13:
  v3 = CmDevicePropertyWrite(a1, a2);
  *v5 = v3;
  return v4;
}
