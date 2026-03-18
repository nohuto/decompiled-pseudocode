/*
 * XREFs of ?UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z @ 0x14016B230
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagTHREADINFO::UpdateLastInputData(tagTHREADINFO *this, const struct tagQMSG *a2)
{
  __int64 v4; // rcx
  bool v5; // zf

  *((_QWORD *)this + 172) = *(_QWORD *)((char *)a2 + 124);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 345) == 1;
  *((_DWORD *)this + 380) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v5 )
    v4 = 0x20000LL;
  *((_QWORD *)this + 170) = *((_QWORD *)this + 170) & 0xFFFFFFFFFFFDFFFFuLL | v4;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_DWORD *)a2 + 31) )
    {
      *((_OWORD *)this + 87) = *((_OWORD *)a2 + 1);
      *((_OWORD *)this + 88) = *((_OWORD *)a2 + 2);
      *((_OWORD *)this + 89) = *((_OWORD *)a2 + 3);
      *((_QWORD *)this + 180) = *(_QWORD *)((char *)a2 + 124);
      *((_QWORD *)this + 181) = *((_QWORD *)a2 + 19);
    }
  }
}
