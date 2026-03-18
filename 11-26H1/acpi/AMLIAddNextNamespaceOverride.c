/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x14006D790
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x14006DF68 (AMLIGetValidNamespaceName.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     OSOpenNextSubkey @ 0x1400B7244 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400B7490 (OSReadNextRegValue.c)
 *     OSCloseHandle @ 0x1400D1E58 (OSCloseHandle.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v4; // edi
  int RegValue; // ebx
  ULONG v6; // esi
  int Subkey; // edi
  int v8; // edx
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-18h] BYREF

  v11 = 0LL;
  KeyHandle = 0LL;
  v4 = 0;
  do
  {
    RegValue = OSReadNextRegValue(a1, v4, v12);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, a2, v12);
    ++v4;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v6 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(a1, v6, v12, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v12, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject((_QWORD *)gpheapGlobal, (__int64)v12, a2, *(_QWORD *)(a2 + 48), &v11, v8);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v11);
            DereferenceObjectEx(v11);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v6;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
