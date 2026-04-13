/*
 * XREFs of tidy_global @ 0x180005600
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800050E0 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180005170 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Deletegloballocale @ 0x1800055BC (_Deletegloballocale.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  Deletegloballocale(&qword_18017F4D8);
  qword_18017F4D8 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
